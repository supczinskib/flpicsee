# Makefile for flpicsee
# Cross-build friendly; uses environment variables exported on pico-dev.

PROG      := flpicsee
PROG_CAPS := FL-PicSee
DESC      := "Picture Viewer"

CXX    ?= g++
STRIP  ?= strip

# Prefer the local FLTK installation used on the Luckfox Pico build host.
# If FLTK is exported in the environment it still wins; otherwise fall back
# to /root/config/apps/fltk/_inst/usr when present, then to /usr/local.
ifneq ($(origin FLTK), environment)
ifneq ($(wildcard /root/config/apps/fltk/_inst/usr/include/FL/Fl.H),)
FLTK := /root/config/apps/fltk/_inst/usr
else
FLTK := /usr/local
endif
endif

PREFIX ?= /usr
DESTDIR ?=

# Keep CXXFLAGS/LDFLAGS from the environment.
COMMON_DEFS := \
	-D_LARGEFILE_SOURCE \
	-D_LARGEFILE64_SOURCE \
	-D_FILE_OFFSET_BITS=64 \
	-D_THREAD_SAFE \
	-D_REENTRANT

INCLUDES := -I$(FLTK)/include

# Optional Buildroot sysroot include/lib paths.
# BR_SYSROOT is accepted for compatibility with older build shells.
# STAGING_SYSROOT is the name exported by the Luckfox/Buildroot environment.
SYSROOT_DIR := $(or $(BR_SYSROOT),$(STAGING_SYSROOT))
ifneq ($(SYSROOT_DIR),)
INCLUDES += -I$(SYSROOT_DIR)/usr/include
SYSROOT_LIBS := \
	-L$(SYSROOT_DIR)/usr/lib \
	-L$(SYSROOT_DIR)/lib \
	-Wl,-rpath-link,$(SYSROOT_DIR)/usr/lib \
	-Wl,-rpath-link,$(SYSROOT_DIR)/lib
endif

APP_CXXFLAGS := $(CXXFLAGS) $(CPPFLAGS_EXTRA) $(INCLUDES) $(COMMON_DEFS) -fvisibility-inlines-hidden

# Dynamic FLTK link. Do not link libfltk*.a into the executable.
APP_LDFLAGS := $(LDFLAGS) \
	-L$(FLTK)/lib \
	$(SYSROOT_LIBS)

APP_LIBS := \
	-Wl,-Bdynamic \
	-lfltk_images \
	-lfltk \
	-lX11 \
	-lXext \
	-lXfixes \
	-lXcursor \
	-lXft \
	-lXrender \
	-lfontconfig \
	-lpng \
	-ljpeg \
	-lz \
	-lm \
	-ldl \
	-lpthread

.PHONY: all basic nopaging nomenu install package deploy clean tarball

all: $(PROG)

$(PROG): $(PROG).o
	$(CXX) $(APP_LDFLAGS) $< -o $@ $(APP_LIBS)
	$(STRIP) $@ 2>/dev/null || true

$(PROG).o: $(PROG).cpp
	$(CXX) $(APP_CXXFLAGS) -c $< -o $@

basic: CPPFLAGS_EXTRA := -DNO_MENU -DNO_PAGING
basic: clean $(PROG)

nopaging: CPPFLAGS_EXTRA := -DNO_PAGING
nopaging: clean $(PROG)

nomenu: CPPFLAGS_EXTRA := -DNO_MENU
nomenu: clean $(PROG)

install: $(PROG)
	install -d $(DESTDIR)$(PREFIX)/bin
	install -m 0755 $(PROG) $(DESTDIR)$(PREFIX)/bin/$(PROG)
	$(STRIP) $(DESTDIR)$(PREFIX)/bin/$(PROG) 2>/dev/null || true

package:
	./build-tcz.sh $(PROG) $(PROG_CAPS) $$(pwd) $(DESC)

deploy: package
	@if [ -f /opt/.tce_dir ]; then \
		TCEDIR=$$(cat /opt/.tce_dir); \
		echo "TCE DIR is $$TCEDIR"; \
		cp $$(pwd)/$(PROG).tcz $$TCEDIR/optional; \
	else \
		echo "/opt/.tce_dir not found"; \
		exit 1; \
	fi

clean:
	rm -f *.o $(PROG)

tarball:
	tar -czf flpicsee_src.tar.gz flpicsee.cpp flpicsee.png flpicsee.tcz.info build-tcz.sh package.sh Makefile
