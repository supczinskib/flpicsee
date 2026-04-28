# Flpicsee for Luckfox Pico Mini

A lightweight FLTK image viewer adapted for the Luckfox Pico Mini / RV1103 embedded Linux environment.

This project is based on `flpicsee` from Tiny Core Linux:

- Upstream project: <https://github.com/tinycorelinux/flpicsee>
- Original application: `flpicsee`
- Original version: 1.3.1
- Original author: Michael A. Losh
- License: GNU GPL version 3, as stated in the original source

The goal of this fork is to keep the viewer small and simple while making it more practical on a very small framebuffer/X11 desktop environment, especially a 480x320 LCD on Luckfox Pico Mini.

## Why this fork exists

The original FL-PicSee is a compact FLTK image viewer. On the Luckfox Pico Mini target system, several practical adjustments were needed:

- the display is very small: 480x320 pixels;
- part of the screen is occupied by the IceWM taskbar and window decorations;
- X11 runs through a lightweight framebuffer setup;
- unnecessary redraws are visible and expensive on the SPI LCD;
- popup menus and dialogs must fit reliably on the screen;
- fullscreen viewing and quick image switching should feel predictable;
- the interface should be localizable and configurable without adding a heavy GUI toolkit.

This fork keeps the original spirit of the application, but adapts it to these constraints.

## Main changes

### Small-screen layout fixes

The main window, file chooser, Help dialog and About dialog were adjusted for a 480x320 embedded display.

Important changes include:

- initial main-window placement is explicitly centered before showing the window;
- IceWM window decorations and the bottom taskbar are taken into account;
- the FLTK file chooser is limited to a size that fits the target screen;
- child dialogs such as “Manage Favorites” are resized and centered so they remain usable;
- Help and About dialogs are custom FLTK windows instead of generic `fl_message()` dialogs.

### Improved fullscreen mode

The viewer supports double-click fullscreen toggling.

Fullscreen mode uses whole-image fitting without changing the image aspect ratio. Pressing `Esc` leaves fullscreen. When images are changed while fullscreen is active, returning to windowed mode recomputes the window for the current image instead of restoring stale geometry from the previous one.

### More predictable zoom behavior

The click zoom cycle was simplified for small embedded screens:

```text
whole image -> 100% if useful -> 200% -> 400% -> whole image
```

The old intermediate zoom levels that were not useful in this environment were removed from the context menu. The menu now exposes the practical zoom choices and keeps Help/About at the end.

Single-click zoom and double-click fullscreen are separated by a short custom double-click timeout. This avoids treating the first half of a double-click as a zoom action.

### Better centering and scrolling

Several image centering and scroll handling issues were fixed:

- fitted images are centered correctly in the visible area;
- scrollbars are handled according to their real FLTK visibility, not only predicted geometry;
- returning from large zoom levels resets the scroll origin when the image fits again;
- `Fl_Scroll::scroll_to()` is used for scroll positioning;
- changing image, resizing the window and leaving fullscreen recompute the image view consistently.

### Reduced unnecessary redraws

The window resize handler avoids expensive image recalculation when only the top-level window position changes.

This matters on framebuffer/X11 systems, where moving a decorated window can generate configure events even when the client size did not change. Avoiding unnecessary rescaling and redraws reduces visible flicker and SPI LCD traffic.

### Multi-image navigation improvements

The viewer keeps the original multi-image mode, but adjusts it for practical keyboard use:

- left/right arrow keys switch images only when the whole image is visible;
- arrow keys are left available for scrolling when the image is zoomed in;
- previous/next actions are disabled when only one image is open, avoiding pointless redraws;
- changing images resets the view to whole-image fit.

### Localized user interface

The application contains built-in translations for common labels, menu items, file chooser text, messages and Help text.

Supported language tables include:

- Arabic
- Simplified Chinese
- Dutch
- English
- French
- German
- Italian
- Polish
- Portuguese
- Russian
- Spanish
- Turkish

The language is selected from the environment, for example `LANGUAGE` or `LANG`.

### Configurable appearance through app-defaults

The application reads optional X resource-style settings from:

```text
/usr/share/X11/app-defaults/Flpicsee
```

Example:

```text
Flpicsee.font:                  DejaVu Sans:style=Book
Flpicsee.boldFont:              DejaVu Sans:style=Bold
Flpicsee.monoFont:              DejaVu Sans Mono:style=Book
Flpicsee.cjkFont:               WenQuanYi Micro Hei
Flpicsee.scheme:                gtk+
Flpicsee.fontSize:              11
Flpicsee.messageFontSize:       11
Flpicsee.pagingButtonFontSize:  14

Flpicsee.background:            #2f2e2b
Flpicsee.fieldBackground:       #3c3b37
Flpicsee.foreground:            #ffffff
Flpicsee.selection:             #6AA835
Flpicsee.menuBackground:        #3c3b37
Flpicsee.menuForeground:        #ffffff
Flpicsee.menuSelection:         #6AA835
Flpicsee.inputSelection:        #6AA835
Flpicsee.browserSelection:      #6AA835
Flpicsee.scrollbarBackground:   #3c3b37
Flpicsee.scrollbarArrow:        #3c3b37
Flpicsee.buttonBackground:      #3c3b37
Flpicsee.buttonForeground:      #ffffff
Flpicsee.imageBackground:       #202020
```

This allows the viewer to visually match a lightweight embedded desktop without linking against GTK, Qt or another large toolkit.

## Target environment

This fork is primarily intended for:

- Luckfox Pico Mini / RV1103;
- Buildroot-based embedded Linux;
- FLTK/X11;
- Xfbdev or similar framebuffer-backed X11 setups;
- small LCD panels around 480x320;
- lightweight window managers such as IceWM;
- systems where disk space, RAM and redraw cost matter.

It may also build and run on other Linux systems with FLTK, but the modifications are tuned for the embedded target above.

## Building

Use the same general build approach as the original Tiny Core Linux `flpicsee` application, adjusted for your cross-toolchain and FLTK installation.

A typical native build on a system with FLTK development files would use `fltk-config`, for example:

```sh
c++ -Os -o flpicsee flpicsee.cpp $(fltk-config --cxxflags --ldflags --use-images)
strip flpicsee
```

For cross-compilation, use your target compiler, sysroot and FLTK installation, for example:

```sh
${CXX:-arm-rockchip830-linux-uclibcgnueabihf-g++} \
  -Os \
  -o flpicsee \
  flpicsee.cpp \
  $(fltk-config --cxxflags --ldflags --use-images)

${STRIP:-arm-rockchip830-linux-uclibcgnueabihf-strip} flpicsee
```

The exact command depends on how FLTK is installed in the target SDK/sysroot.

## Installing app-defaults

Install the optional resource file as:

```sh
install -d /usr/share/X11/app-defaults
install -m 0644 Flpicsee /usr/share/X11/app-defaults/Flpicsee
```

## Upstream credit

This project is a modified version of Tiny Core Linux `flpicsee`.

All credit for the original FL-PicSee application belongs to Michael A. Losh and the Tiny Core Linux project. This fork contains practical modifications for the Luckfox Pico Mini embedded environment.

## Notes

This fork is not intended to turn Flpicsee into a large desktop image manager. The goal is the opposite: keep it small, understandable and suitable for a constrained embedded GUI system.

