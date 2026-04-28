// Flpicsee  -- A FLTK-based picture viewer 
// See About_text[] below for copyright and distribution license

#define APP_VER "1.3.1" // Last update 2010-10-01

#ifndef NO_MENU
#define INCL_MENU
#endif

#ifndef NO_PAGING
#define INCL_PAGING
#endif

#ifndef MAX
#define MAX(a, b) ((a) > (b))?(a):(b)
#endif

/* ------------------------------------------------------- */

#ifdef INCL_MENU
const char About_text[] = 
"Flpicsee version %s\n"
"copyright 2010 by Michael A. Losh\n"
"\n"
"Flpicsee is free software: you can redistribute it and/or\n"
"modify it under the terms of the GNU General Public License\n"
"as published by the Free Software Foundation, version 3.\n"
"\n"
"Flpicsee is distributed in the hope that it will be useful,\n"
"but WITHOUT ANY WARRANTY; without even the implied warranty of\n"
"MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.\n"
"See http://www.gnu.org/licenses/ for more details.";
#endif

const char LeftClickHelp_text[] = 
"Zoom: left-click or mouse scroll wheel;   "
"Panning: left-click + drag, or keyboard arrows";
const char RightClickHelp_text[] = 
"Menu: right-click to access menu with specific zoom settings and additional commands.";

#ifdef INCL_MENU
const char Help_text[] = 
"Mouse Control:\n"
"%s\n" // LeftClickHelp_text
"%s\n" // RightClickHelp_text
#ifdef INCL_PAGING
"\n"
"Multi-Image Viewing:\n"
"You may specify multiple files and/or directories on the command line.\n"
"Or start Flpicsee with no arguments and Ctrl-click multiple files in \n"
"the File Chooser dialog box. Page to next or previous image by\n"
"clicking in upper left or right window corners, or use any of these keys:\n"
"    Forward: Space, PgDn, Ctrl+N, Ctrl+DownArrow\n"
"    Backward: Backspace, PgUp, Ctrl+P, Ctrl+UpArrow\n"
"Ctrl+S will start or stop the slideshow mode"
#endif
;   

const char Help_text_ar[] =
"التحكم بالفأرة:\n"
"%s\n"
"%s\n"
#ifdef INCL_PAGING
"\n"
"عرض عدة صور:\n"
"يمكنك تحديد عدة ملفات و/أو أدلة من سطر الأوامر.\n"
"أو شغّل Flpicsee بدون وسيطات وحدد عدة ملفات بالضغط على Ctrl\n"
"في مربع اختيار الملفات. انتقل إلى الصورة التالية أو السابقة\n"
"بالنقر في الزاويتين العلويتين اليسرى أو اليمنى للنافذة، أو استخدم هذه المفاتيح:\n"
"    للأمام: Space، PgDn، Ctrl+N، Ctrl+سهم لأسفل\n"
"    للخلف: Backspace، PgUp، Ctrl+P، Ctrl+سهم لأعلى\n"
"Ctrl+S يبدأ أو يوقف وضع عرض الشرائح"
#endif
;

const char Help_text_zh_CN[] =
"鼠标控制：\n"
"%s\n"
"%s\n"
#ifdef INCL_PAGING
"\n"
"多图像查看：\n"
"可以在命令行指定多个文件和/或目录。\n"
"也可以不带参数启动 Flpicsee，然后在文件选择对话框中按住 Ctrl\n"
"选择多个文件。单击窗口左上角或右上角可切换到上一张或下一张图像，\n"
"也可以使用以下按键：\n"
"    前进：Space、PgDn、Ctrl+N、Ctrl+DownArrow\n"
"    后退：Backspace、PgUp、Ctrl+P、Ctrl+UpArrow\n"
"Ctrl+S 将启动或停止幻灯片模式"
#endif
;

const char Help_text_nl[] =
"Muisbediening:\n"
"%s\n"
"%s\n"
#ifdef INCL_PAGING
"\n"
"Meerdere afbeeldingen bekijken:\n"
"U kunt meerdere bestanden en/of mappen op de opdrachtregel opgeven.\n"
"Of start Flpicsee zonder argumenten en Ctrl-klik meerdere bestanden in\n"
"het dialoogvenster Bestandskiezer. Ga naar de volgende of vorige afbeelding\n"
"door in de linker- of rechterbovenhoek van het venster te klikken, of gebruik deze toetsen:\n"
"    Vooruit: Space, PgDn, Ctrl+N, Ctrl+DownArrow\n"
"    Terug: Backspace, PgUp, Ctrl+P, Ctrl+UpArrow\n"
"Ctrl+S start of stopt de diavoorstelling"
#endif
;

const char Help_text_fr[] =
"Contrôle à la souris :\n"
"%s\n"
"%s\n"
#ifdef INCL_PAGING
"\n"
"Affichage de plusieurs images :\n"
"Vous pouvez indiquer plusieurs fichiers et/ou dossiers sur la ligne de commande.\n"
"Vous pouvez aussi lancer Flpicsee sans argument et sélectionner plusieurs fichiers\n"
"avec Ctrl-clic dans la boîte de dialogue de sélection de fichier. Passez à l'image\n"
"suivante ou précédente en cliquant dans les coins supérieurs gauche ou droit de la fenêtre,\n"
"ou utilisez l'une de ces touches :\n"
"    Suivant : Espace, PgDn, Ctrl+N, Ctrl+flèche bas\n"
"    Précédent : Retour arrière, PgUp, Ctrl+P, Ctrl+flèche haut\n"
"Ctrl+S démarre ou arrête le mode diaporama"
#endif
;

const char Help_text_de[] =
"Maussteuerung:\n"
"%s\n"
"%s\n"
#ifdef INCL_PAGING
"\n"
"Mehrere Bilder anzeigen:\n"
"Sie können mehrere Dateien und/oder Verzeichnisse in der Befehlszeile angeben.\n"
"Oder starten Sie Flpicsee ohne Argumente und wählen Sie mit Strg-Klick mehrere Dateien\n"
"im Dateiauswahldialog aus. Wechseln Sie zum nächsten oder vorherigen Bild,\n"
"indem Sie in die obere linke oder rechte Fensterecke klicken, oder verwenden Sie diese Tasten:\n"
"    Vorwärts: Space, PgDn, Ctrl+N, Ctrl+DownArrow\n"
"    Zurück: Backspace, PgUp, Ctrl+P, Ctrl+UpArrow\n"
"Ctrl+S startet oder stoppt den Diashow-Modus"
#endif
;

const char Help_text_it[] =
"Controllo con il mouse:\n"
"%s\n"
"%s\n"
#ifdef INCL_PAGING
"\n"
"Visualizzazione di più immagini:\n"
"È possibile specificare più file e/o directory dalla riga di comando.\n"
"Oppure avviare Flpicsee senza argomenti e selezionare più file con Ctrl-clic\n"
"nella finestra di scelta file. Passare all'immagine successiva o precedente\n"
"facendo clic negli angoli superiori sinistro o destro della finestra, oppure usare questi tasti:\n"
"    Avanti: Space, PgDn, Ctrl+N, Ctrl+DownArrow\n"
"    Indietro: Backspace, PgUp, Ctrl+P, Ctrl+UpArrow\n"
"Ctrl+S avvia o interrompe la modalità presentazione"
#endif
;

const char Help_text_pl[] =
"Sterowanie myszą:\n"
"%s\n"
"%s\n"
#ifdef INCL_PAGING
"\n"
"Przeglądanie wielu obrazów:\n"
"Możesz podać wiele plików lub katalogów w wierszu poleceń.\n"
"Możesz też uruchomić Flpicsee bez argumentów i zaznaczyć wiele plików\n"
"w oknie wyboru pliku, trzymając Ctrl. Przejście do następnego lub\n"
"poprzedniego obrazu jest możliwe przez kliknięcie w górnym lewym lub\n"
"prawym rogu okna albo przez użycie tych klawiszy:\n"
"    Dalej: spacja, PgDn, Ctrl+N, Ctrl+strzałka w dół\n"
"    Wstecz: Backspace, PgUp, Ctrl+P, Ctrl+strzałka w górę\n"
"Ctrl+S uruchamia lub zatrzymuje pokaz slajdów"
#endif
;

const char Help_text_pt[] =
"Controlo do rato:\n"
"%s\n"
"%s\n"
#ifdef INCL_PAGING
"\n"
"Visualização de várias imagens:\n"
"Pode indicar vários ficheiros e/ou diretórios na linha de comandos.\n"
"Ou inicie o Flpicsee sem argumentos e selecione vários ficheiros com Ctrl-clique\n"
"na caixa de diálogo de seleção de ficheiros. Passe para a imagem seguinte ou anterior\n"
"clicando nos cantos superiores esquerdo ou direito da janela, ou use estas teclas:\n"
"    Avançar: Space, PgDn, Ctrl+N, Ctrl+DownArrow\n"
"    Recuar: Backspace, PgUp, Ctrl+P, Ctrl+UpArrow\n"
"Ctrl+S inicia ou para o modo de apresentação"
#endif
;

const char Help_text_ru[] =
"Управление мышью:\n"
"%s\n"
"%s\n"
#ifdef INCL_PAGING
"\n"
"Просмотр нескольких изображений:\n"
"Можно указать несколько файлов и/или каталогов в командной строке.\n"
"Или запустите Flpicsee без аргументов и выберите несколько файлов\n"
"с помощью Ctrl-щелчка в диалоге выбора файла. Переходите к следующему\n"
"или предыдущему изображению щелчком в верхнем левом или правом углу окна,\n"
"либо используйте эти клавиши:\n"
"    Вперёд: Space, PgDn, Ctrl+N, Ctrl+DownArrow\n"
"    Назад: Backspace, PgUp, Ctrl+P, Ctrl+UpArrow\n"
"Ctrl+S запускает или останавливает режим слайд-шоу"
#endif
;

const char Help_text_es[] =
"Control con el ratón:\n"
"%s\n"
"%s\n"
#ifdef INCL_PAGING
"\n"
"Visualización de varias imágenes:\n"
"Puede especificar varios archivos y/o directorios en la línea de comandos.\n"
"O iniciar Flpicsee sin argumentos y seleccionar varios archivos con Ctrl-clic\n"
"en el cuadro de selección de archivos. Pase a la imagen siguiente o anterior\n"
"haciendo clic en las esquinas superiores izquierda o derecha de la ventana,\n"
"o use cualquiera de estas teclas:\n"
"    Adelante: Space, PgDn, Ctrl+N, Ctrl+DownArrow\n"
"    Atrás: Backspace, PgUp, Ctrl+P, Ctrl+UpArrow\n"
"Ctrl+S inicia o detiene el modo de presentación"
#endif
;

const char Help_text_tr[] =
"Fare denetimi:\n"
"%s\n"
"%s\n"
#ifdef INCL_PAGING
"\n"
"Çoklu görüntü izleme:\n"
"Komut satırında birden fazla dosya ve/veya dizin belirtebilirsiniz.\n"
"Ya da Flpicsee'yi argümansız başlatıp Dosya Seçici penceresinde Ctrl-tıklama ile\n"
"birden fazla dosya seçebilirsiniz. Sonraki veya önceki görüntüye geçmek için\n"
"pencerenin sol üst ya da sağ üst köşesine tıklayın veya şu tuşları kullanın:\n"
"    İleri: Space, PgDn, Ctrl+N, Ctrl+DownArrow\n"
"    Geri: Backspace, PgUp, Ctrl+P, Ctrl+UpArrow\n"
"Ctrl+S slayt gösterisi modunu başlatır veya durdurur"
#endif
;

#endif
/*-----------------------------------------------------------------*/

// 480x320 target, leave room for panel and WM titlebar.
#define APP_FILE_CHOOSER_MAX_W 480
#define APP_FILE_CHOOSER_WORK_H 296
#define APP_FILE_CHOOSER_TITLEBAR_ROOM 30
#define APP_FILE_CHOOSER_MAX_H (APP_FILE_CHOOSER_WORK_H - APP_FILE_CHOOSER_TITLEBAR_ROOM)
#define APP_DIALOG_MIN_Y 26

#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <time.h>
#include <sys/time.h>
#include <unistd.h>
#include <dirent.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <FL/Fl.H>
#include <FL/Fl_File_Chooser.H>
#include <FL/Fl_Group.H>
#include <FL/fl_ask.H>
#include <FL/fl_draw.H>
#include <FL/Fl_Window.H>
#include <FL/Fl_Shared_Image.H>
#include <FL/Fl_BMP_Image.H>
#include <FL/Fl_GIF_Image.H>
#include <FL/Fl_JPEG_Image.H>
#include <FL/Fl_PNG_Image.H>
#include <FL/Fl_XBM_Image.H>
#include <FL/Fl_XPM_Image.H>
#include <FL/Fl_Box.H>
#include <FL/Fl_Button.H>
#include <FL/Fl_Scroll.H>
#include <FL/Fl_Menu_Item.H>
#include <FL/Fl_Menu_.H>
#include <FL/Fl_Input_.H>
#include <FL/Fl_Browser_.H>
#include <FL/Fl_Scrollbar.H>
#include <FL/Fl_Tooltip.H>
#include <cstdlib>

extern const char *fl_ok;
extern const char *fl_cancel;
extern const char *fl_yes;
extern const char *fl_no;
extern const char *fl_close;

#define APP_FONT FL_HELVETICA
#define APP_CJK_FONT ((Fl_Font)(FL_FREE_FONT + 1))
#define APP_FONT_SIZE_DEFAULT 11
#define APP_MESSAGE_FONT_SIZE_DEFAULT 11
#define APP_PAGING_FONT_SIZE_DEFAULT 14

static const char *app_lang = "en";
static int app_font_size = APP_FONT_SIZE_DEFAULT;
static int app_message_font_size = APP_MESSAGE_FONT_SIZE_DEFAULT;
static int app_paging_font_size = APP_PAGING_FONT_SIZE_DEFAULT;
static char app_font_name[256] = "DejaVu Sans:style=Book";
static char app_bold_font_name[256] = "DejaVu Sans:style=Bold";
static char app_mono_font_name[256] = "DejaVu Sans Mono:style=Book";
static char app_cjk_font_name[256] = "WenQuanYi Micro Hei";
static char app_scheme[64] = "gtk+";

struct AppColors {
    Fl_Color background; int have_background;
    Fl_Color field_background; int have_field_background;
    Fl_Color foreground; int have_foreground;
    Fl_Color selection; int have_selection;
    Fl_Color menu_background; int have_menu_background;
    Fl_Color menu_foreground; int have_menu_foreground;
    Fl_Color menu_selection; int have_menu_selection;
    Fl_Color input_selection; int have_input_selection;
    Fl_Color browser_selection; int have_browser_selection;
    Fl_Color scrollbar_background; int have_scrollbar_background;
    Fl_Color scrollbar_arrow; int have_scrollbar_arrow;
    Fl_Color button_background; int have_button_background;
    Fl_Color button_foreground; int have_button_foreground;
    Fl_Color image_background; int have_image_background;
};
static AppColors app_colors = {0};

struct TranslationEntry {
    const char *key;
    const char *ar;
    const char *zh_CN;
    const char *nl;
    const char *en;
    const char *fr;
    const char *de;
    const char *it;
    const char *pl;
    const char *pt;
    const char *ru;
    const char *es;
    const char *tr;
};

static const TranslationEntry translations[] = {
    {"OK", "موافق", "确定", "OK", "OK", "OK", "OK", "OK", "OK", "OK", "ОК", "Aceptar", "Tamam"},
    {"Cancel", "إلغاء", "取消", "Annuleren", "Cancel", "Annuler", "Abbrechen", "Annulla", "Anuluj", "Cancelar", "Отмена", "Cancelar", "İptal"},
    {"Yes", "نعم", "是", "Ja", "Yes", "Oui", "Ja", "Sì", "Tak", "Sim", "Да", "Sí", "Evet"},
    {"No", "لا", "否", "Nee", "No", "Non", "Nein", "No", "Nie", "Não", "Нет", "No", "Hayır"},
    {"Close", "إغلاق", "关闭", "Sluiten", "Close", "Fermer", "Schließen", "Chiudi", "Zamknij", "Fechar", "Закрыть", "Cerrar", "Kapat"},
    {"Help", "مساعدة", "帮助", "Help", "Help", "Aide", "Hilfe", "Aiuto", "Pomoc", "Ajuda", "Справка", "Ayuda", "Yardım"},
    {"About", "حول", "关于", "Over", "About", "À propos", "Über", "Informazioni", "O programie", "Sobre", "О программе", "Acerca de", "Hakkında"},
    {"Preview", "معاينة", "预览", "Voorbeeld", "Preview", "Aperçu", "Vorschau", "Anteprima", "Podgląd", "Pré-visualizar", "Предпросмотр", "Vista previa", "Önizleme"},
    {"New Directory", "مجلد جديد", "新建目录", "Nieuwe map", "New Directory", "Nouveau dossier", "Neues Verzeichnis", "Nuova cartella", "Nowy katalog", "Novo diretório", "Новый каталог", "Nuevo directorio", "Yeni dizin"},
    {"New Directory?", "دليل جديد؟", "新建目录？", "Nieuwe map?", "New Directory?", "Nouveau dossier ?", "Neues Verzeichnis?", "Nuova cartella?", "Nowy katalog?", "Novo diretório?", "Новый каталог?", "¿Nuevo directorio?", "Yeni dizin?"},
    {"Create a new directory.", "إنشاء دليل جديد.", "创建新目录。", "Een nieuwe map maken.", "Create a new directory.", "Créer un nouveau dossier.", "Neues Verzeichnis erstellen.", "Crea una nuova cartella.", "Utwórz nowy katalog.", "Criar um novo diretório.", "Создать новый каталог.", "Crear un nuevo directorio.", "Yeni bir dizin oluştur."},
    {"Show hidden files", "إظهار الملفات المخفية", "显示隐藏文件", "Verborgen bestanden tonen", "Show hidden files", "Afficher les fichiers cachés", "Versteckte Dateien anzeigen", "Mostra file nascosti", "Pokaż ukryte pliki", "Mostrar ficheiros ocultos", "Показывать скрытые файлы", "Mostrar archivos ocultos", "Gizli dosyaları göster"},
    {"Show:", "عرض:", "显示:", "Weergeven:", "Show:", "Afficher :", "Anzeigen:", "Mostra:", "Pokaż:", "Mostrar:", "Показать:", "Mostrar:", "Göster:"},
    {"Filename:", "اسم الملف:", "文件名:", "Bestandsnaam:", "Filename:", "Nom du fichier :", "Dateiname:", "Nome file:", "Nazwa pliku:", "Nome do ficheiro:", "Имя файла:", "Nombre del archivo:", "Dosya adı:"},
    {"Custom Filter", "مرشح مخصص", "自定义筛选器", "Aangepast filter", "Custom Filter", "Filtre personnalisé", "Benutzerdefinierter Filter", "Filtro personalizzato", "Filtr niestandardowy", "Filtro personalizado", "Пользовательский фильтр", "Filtro personalizado", "Özel filtre"},
    {"Favorites", "المفضلة", "收藏夹", "Favorieten", "Favorites", "Favoris", "Favoriten", "Preferiti", "Ulubione", "Favoritos", "Избранное", "Favoritos", "Favoriler"},
    {"Add to Favorites", "أضف إلى المفضلة", "添加到收藏夹", "Toevoegen aan favorieten", "Add to Favorites", "Ajouter aux favoris", "Zu Favoriten hinzufügen", "Aggiungi ai preferiti", "Dodaj do ulubionych", "Adicionar aos favoritos", "Добавить в избранное", "Agregar a favoritos", "Favorilere ekle"},
    {"Manage Favorites", "إدارة المفضلة", "管理收藏夹", "Favorieten beheren", "Manage Favorites", "Gérer les favoris", "Favoriten verwalten", "Gestisci preferiti", "Zarządzaj ulubionymi", "Gerir favoritos", "Управление избранным", "Administrar favoritos", "Favorileri yönet"},
    {"File Systems", "أنظمة الملفات", "文件系统", "Bestandssystemen", "File Systems", "Systèmes de fichiers", "Dateisysteme", "File system", "Systemy plików", "Sistemas de ficheiros", "Файловые системы", "Sistemas de archivos", "Dosya sistemleri"},
    {"Please choose an existing file!", "يرجى اختيار ملف موجود!", "请选择一个现有文件！", "Kies een bestaand bestand!", "Please choose an existing file!", "Veuillez choisir un fichier existant !", "Bitte wählen Sie eine vorhandene Datei!", "Scegliere un file esistente!", "Wybierz istniejący plik!", "Escolha um ficheiro existente!", "Выберите существующий файл!", "¡Elija un archivo existente!", "Lütfen mevcut bir dosya seçin!"},
    {"Select Image File", "اختر ملف صورة", "选择图像文件", "Afbeeldingsbestand selecteren", "Select Image File", "Sélectionner un fichier image", "Bilddatei auswählen", "Seleziona file immagine", "Wybierz plik obrazu", "Selecionar ficheiro de imagem", "Выберите файл изображения", "Seleccionar archivo de imagen", "Görüntü dosyası seç"},
    {"Image Files (*.{jpg,jpeg,png,gif,bmp,xbm,xpm})", "ملفات الصور (*.{jpg,jpeg,png,gif,bmp,xbm,xpm})", "图像文件 (*.{jpg,jpeg,png,gif,bmp,xbm,xpm})", "Afbeeldingsbestanden (*.{jpg,jpeg,png,gif,bmp,xbm,xpm})", "Image Files (*.{jpg,jpeg,png,gif,bmp,xbm,xpm})", "Fichiers image (*.{jpg,jpeg,png,gif,bmp,xbm,xpm})", "Bilddateien (*.{jpg,jpeg,png,gif,bmp,xbm,xpm})", "File immagine (*.{jpg,jpeg,png,gif,bmp,xbm,xpm})", "Pliki obrazów (*.{jpg,jpeg,png,gif,bmp,xbm,xpm})", "Ficheiros de imagem (*.{jpg,jpeg,png,gif,bmp,xbm,xpm})", "Файлы изображений (*.{jpg,jpeg,png,gif,bmp,xbm,xpm})", "Archivos de imagen (*.{jpg,jpeg,png,gif,bmp,xbm,xpm})", "Görüntü dosyaları (*.{jpg,jpeg,png,gif,bmp,xbm,xpm})"},
    {"JPEG Files (*.jpg)", "ملفات JPEG (*.jpg)", "JPEG 文件 (*.jpg)", "JPEG-bestanden (*.jpg)", "JPEG Files (*.jpg)", "Fichiers JPEG (*.jpg)", "JPEG-Dateien (*.jpg)", "File JPEG (*.jpg)", "Pliki JPEG (*.jpg)", "Ficheiros JPEG (*.jpg)", "Файлы JPEG (*.jpg)", "Archivos JPEG (*.jpg)", "JPEG dosyaları (*.jpg)"},
    {"PNG Files (*.png)", "ملفات PNG (*.png)", "PNG 文件 (*.png)", "PNG-bestanden (*.png)", "PNG Files (*.png)", "Fichiers PNG (*.png)", "PNG-Dateien (*.png)", "File PNG (*.png)", "Pliki PNG (*.png)", "Ficheiros PNG (*.png)", "Файлы PNG (*.png)", "Archivos PNG (*.png)", "PNG dosyaları (*.png)"},
    {"GIF Files (*.gif)", "ملفات GIF (*.gif)", "GIF 文件 (*.gif)", "GIF-bestanden (*.gif)", "GIF Files (*.gif)", "Fichiers GIF (*.gif)", "GIF-Dateien (*.gif)", "File GIF (*.gif)", "Pliki GIF (*.gif)", "Ficheiros GIF (*.gif)", "Файлы GIF (*.gif)", "Archivos GIF (*.gif)", "GIF dosyaları (*.gif)"},
    {"BMP Files (*.bmp)", "ملفات BMP (*.bmp)", "BMP 文件 (*.bmp)", "BMP-bestanden (*.bmp)", "BMP Files (*.bmp)", "Fichiers BMP (*.bmp)", "BMP-Dateien (*.bmp)", "File BMP (*.bmp)", "Pliki BMP (*.bmp)", "Ficheiros BMP (*.bmp)", "Файлы BMP (*.bmp)", "Archivos BMP (*.bmp)", "BMP dosyaları (*.bmp)"},
    {"XBM Files (*.xbm)", "ملفات XBM (*.xbm)", "XBM 文件 (*.xbm)", "XBM-bestanden (*.xbm)", "XBM Files (*.xbm)", "Fichiers XBM (*.xbm)", "XBM-Dateien (*.xbm)", "File XBM (*.xbm)", "Pliki XBM (*.xbm)", "Ficheiros XBM (*.xbm)", "Файлы XBM (*.xbm)", "Archivos XBM (*.xbm)", "XBM dosyaları (*.xbm)"},
    {"XPM Files (*.xpm)", "ملفات XPM (*.xpm)", "XPM 文件 (*.xpm)", "XPM-bestanden (*.xpm)", "XPM Files (*.xpm)", "Fichiers XPM (*.xpm)", "XPM-Dateien (*.xpm)", "File XPM (*.xpm)", "Pliki XPM (*.xpm)", "Ficheiros XPM (*.xpm)", "Файлы XPM (*.xpm)", "Archivos XPM (*.xpm)", "XPM dosyaları (*.xpm)"},
    {"All Files (*)", "كل الملفات (*)", "所有文件 (*)", "Alle bestanden (*)", "All Files (*)", "Tous les fichiers (*)", "Alle Dateien (*)", "Tutti i file (*)", "Wszystkie pliki (*)", "Todos os ficheiros (*)", "Все файлы (*)", "Todos los archivos (*)", "Tüm dosyalar (*)"},
    {"Zoom: left-click or mouse scroll wheel;   Panning: left-click + drag, or keyboard arrows", "التكبير: النقر الأيسر أو عجلة الفأرة؛ التحريك: النقر الأيسر مع السحب أو أسهم لوحة المفاتيح", "缩放：左键单击或鼠标滚轮；平移：左键拖动或键盘方向键", "Zoomen: linksklik of muiswiel; pannen: linksklik + slepen of pijltjestoetsen", "Zoom: left-click or mouse scroll wheel;   Panning: left-click + drag, or keyboard arrows", "Zoom : clic gauche ou molette ; déplacement : clic gauche + glisser ou flèches du clavier", "Zoom: Linksklick oder Mausrad; Verschieben: Linksklick + Ziehen oder Pfeiltasten", "Zoom: clic sinistro o rotellina; spostamento: clic sinistro + trascina o frecce", "Powiększanie: lewy klik lub kółko myszy; przesuwanie: lewy klik + przeciąganie albo strzałki", "Zoom: clique esquerdo ou roda do rato; deslocar: clique esquerdo + arrastar ou setas", "Масштаб: левый щелчок или колесо мыши; перемещение: левый щелчок + перетаскивание или стрелки", "Zoom: clic izquierdo o rueda del ratón; desplazamiento: clic izquierdo + arrastrar o flechas", "Yakınlaştırma: sol tık veya fare tekeri; kaydırma: sol tık + sürükle ya da ok tuşları"},
    {"Menu: right-click to access menu with specific zoom settings and additional commands.", "القائمة: انقر بالزر الأيمن للوصول إلى إعدادات التكبير والأوامر الإضافية.", "菜单：右键单击可打开特定缩放设置和其他命令。", "Menu: rechtsklik voor specifieke zoominstellingen en extra opdrachten.", "Menu: right-click to access menu with specific zoom settings and additional commands.", "Menu : clic droit pour accéder aux réglages de zoom et aux commandes supplémentaires.", "Menü: Rechtsklick für bestimmte Zoom-Einstellungen und zusätzliche Befehle.", "Menu: clic destro per impostazioni di zoom specifiche e comandi aggiuntivi.", "Menu: prawy klik otwiera ustawienia powiększenia i dodatkowe polecenia.", "Menu: clique direito para definições específicas de zoom e comandos adicionais.", "Меню: щелкните правой кнопкой, чтобы открыть настройки масштаба и дополнительные команды.", "Menú: clic derecho para acceder a ajustes de zoom y comandos adicionales.", "Menü: belirli yakınlaştırma ayarları ve ek komutlar için sağ tıklayın."},
    {"Image '%s' not found or viewable.\n", "لم يتم العثور على الصورة '%s' أو لا يمكن عرضها.\n", "未找到图像 '%s' 或无法查看。\n", "Afbeelding '%s' niet gevonden of niet weer te geven.\n", "Image '%s' not found or viewable.\n", "Image '%s' introuvable ou impossible à afficher.\n", "Bild '%s' nicht gefunden oder nicht anzeigbar.\n", "Immagine '%s' non trovata o non visualizzabile.\n", "Nie znaleziono obrazu '%s' albo nie można go wyświetlić.\n", "Imagem '%s' não encontrada ou não visualizável.\n", "Изображение '%s' не найдено или не может быть показано.\n", "Imagen '%s' no encontrada o no visible.\n", "'%s' görüntüsü bulunamadı veya görüntülenemiyor.\n"},
    {"Loading image %s\n", "جارٍ تحميل الصورة %s\n", "正在加载图像 %s\n", "Afbeelding %s laden\n", "Loading image %s\n", "Chargement de l'image %s\n", "Bild %s wird geladen\n", "Caricamento immagine %s\n", "Wczytywanie obrazu %s\n", "A carregar imagem %s\n", "Загрузка изображения %s\n", "Cargando imagen %s\n", "%s görüntüsü yükleniyor\n"},
    {"Image '%s' has no recognized type.\n", "الصورة '%s' ليس لها نوع معروف.\n", "图像 '%s' 的类型无法识别。\n", "Afbeelding '%s' heeft geen herkend type.\n", "Image '%s' has no recognized type.\n", "L'image '%s' n'a pas de type reconnu.\n", "Bild '%s' hat keinen erkannten Typ.\n", "L'immagine '%s' non ha un tipo riconosciuto.\n", "Obraz '%s' ma nierozpoznany typ.\n", "A imagem '%s' não tem um tipo reconhecido.\n", "Изображение '%s' имеет нераспознанный тип.\n", "La imagen '%s' no tiene un tipo reconocido.\n", "'%s' görüntüsünün türü tanınmadı.\n"},
    {"No image file given.", "لم يتم تحديد ملف صورة.", "未指定图像文件。", "Geen afbeeldingsbestand opgegeven.", "No image file given.", "Aucun fichier image indiqué.", "Keine Bilddatei angegeben.", "Nessun file immagine specificato.", "Nie podano pliku obrazu.", "Nenhum ficheiro de imagem indicado.", "Файл изображения не указан.", "No se indicó ningún archivo de imagen.", "Görüntü dosyası verilmedi."},
    {"Prev", "السابق", "上一张", "Vorige", "Prev", "Précédent", "Zurück", "Prec.", "Poprz.", "Anterior", "Пред.", "Anterior", "Önceki"},
    {"Next", "التالي", "下一张", "Volgende", "Next", "Suivant", "Weiter", "Succ.", "Nast.", "Seguinte", "След.", "Siguiente", "Sonraki"},
    {"SLIDESHOW: ", "عرض الشرائح: ", "幻灯片放映：", "DIAVOORSTELLING: ", "SLIDESHOW: ", "DIAPORAMA : ", "DIASHOW: ", "PRESENTAZIONE: ", "POKAZ SLAJDÓW: ", "APRESENTAÇÃO: ", "СЛАЙД-ШОУ: ", "PRESENTACIÓN: ", "SLAYT GÖSTERİSİ: "},
    {"of", "من", "共", "van", "of", "sur", "von", "di", "z", "de", "из", "de", "/"},
    {"&about", "&حول", "关于(&A)", "&Over", "&About", "&À propos", "&Über", "&Informazioni", "&O programie", "&Sobre", "&О программе", "&Acerca de", "&Hakkında"},
    {"&help", "&مساعدة", "帮助(&H)", "&Help", "&Help", "&Aide", "&Hilfe", "&Aiuto", "&Pomoc", "&Ajuda", "&Справка", "&Ayuda", "&Yardım"},
    {"&prev. Image", "الصورة ال&سابقة", "上一张图像(&P)", "&Vorige afbeelding", "&Prev. Image", "Image &précédente", "&Voriges Bild", "Immagine &precedente", "&Poprz. obraz", "Imagem &anterior", "&Пред. изображение", "Imagen &anterior", "&Önceki görüntü"},
    {"&next Image", "الصورة ال&تالية", "下一张图像(&N)", "&Volgende afbeelding", "&Next Image", "Image &suivante", "&Nächstes Bild", "Immagine &successiva", "&Nast. obraz", "Imagem &seguinte", "&След. изображение", "Imagen &siguiente", "&Sonraki görüntü"},
    {"&slideshow start/stop", "بدء/إيقاف عرض ال&شرائح", "开始/停止幻灯片(&S)", "Diavoorstelling &start/stop", "&Slideshow start/stop", "Démarrer/arrêter le &diaporama", "&Diashow starten/stoppen", "Avvia/ferma &presentazione", "&Pokaz slajdów start/stop", "Iniciar/parar &apresentação", "&Слайд-шоу старт/стоп", "Iniciar/detener &presentación", "&Slayt gösterisi başlat/durdur"},
    {"&100% zoom", "تكبير &100%", "100% 缩放(&1)", "&100% Zoom", "&100% Zoom", "Zoom &100 %", "&100% Zoom", "Zoom &100%", "Powiększenie &100%", "Zoom &100%", "Масштаб &100%", "Zoom &100%", "&100% Yakınlaştır"},
    {"&200% zoom", "تكبير &200%", "200% 缩放(&2)", "&200% Zoom", "&200% Zoom", "Zoom &200 %", "&200% Zoom", "Zoom &200%", "Powiększenie &200%", "Zoom &200%", "Масштаб &200%", "Zoom &200%", "&200% Yakınlaştır"},
    {"&400% zoom", "تكبير &400%", "400% 缩放(&4)", "&400% Zoom", "&400% Zoom", "Zoom &400 %", "&400% Zoom", "Zoom &400%", "Powiększenie &400%", "Zoom &400%", "Масштаб &400%", "Zoom &400%", "&400% Yakınlaştır"},
    {"&whole image", "الصورة &كاملة", "整张图像(&W)", "&Hele afbeelding", "&Whole image", "Image &entière", "&Ganzes Bild", "Immagine &intera", "&Cały obraz", "Imagem &inteira", "&Всё изображение", "Imagen &completa", "&Tüm görüntü"},
    {"&fit window", "&ملاءمة النافذة", "适合窗口(&F)", "&Passen in venster", "&Fit window", "&Adapter à la fenêtre", "An &Fenster anpassen", "&Adatta alla finestra", "&Dopasuj do okna", "&Ajustar à janela", "&По размеру окна", "&Ajustar a ventana", "&Pencereye sığdır"},
    {"&open another...", "&افتح ملفاً آخر...", "打开其他(&O)...", "&Andere openen...", "&Open another...", "&Ouvrir un autre...", "&Anderes öffnen...", "&Apri un altro...", "&Otwórz inny...", "&Abrir outro...", "&Открыть другое...", "&Abrir otro...", "&Başka aç..."}
};

static int lang_matches(const char *value, const char *lang_code) {
    if (!value || !*value || !lang_code || !*lang_code) return 0;
    size_t n = strlen(lang_code);
    return strncmp(value, lang_code, n) == 0 && (value[n] == '\0' || value[n] == '_' || value[n] == '-' || value[n] == '.');
}
static const char *detect_app_language(void) {
    const char *value = getenv("LANGUAGE");
    if (!value || !*value) value = getenv("LC_ALL");
    if (!value || !*value) value = getenv("LC_MESSAGES");
    if (!value || !*value) value = getenv("LANG");

    if (lang_matches(value, "ar")) return "ar";
    if (lang_matches(value, "zh_CN") || lang_matches(value, "zh")) return "zh_CN";
    if (lang_matches(value, "nl")) return "nl";
    if (lang_matches(value, "fr")) return "fr";
    if (lang_matches(value, "de")) return "de";
    if (lang_matches(value, "it")) return "it";
    if (lang_matches(value, "pl")) return "pl";
    if (lang_matches(value, "pt")) return "pt";
    if (lang_matches(value, "ru")) return "ru";
    if (lang_matches(value, "es")) return "es";
    if (lang_matches(value, "tr")) return "tr";
    if (lang_matches(value, "en")) return "en";
    return "en";
}
static const char *tr(const char *key) {
    if (!key) return "";
    for (unsigned int i = 0; i < sizeof(translations) / sizeof(translations[0]); ++i) {
        if (!strcmp(translations[i].key, key)) {
            if (!strcmp(app_lang, "ar")) return translations[i].ar;
            if (!strcmp(app_lang, "zh_CN")) return translations[i].zh_CN;
            if (!strcmp(app_lang, "nl")) return translations[i].nl;
            if (!strcmp(app_lang, "fr")) return translations[i].fr;
            if (!strcmp(app_lang, "de")) return translations[i].de;
            if (!strcmp(app_lang, "it")) return translations[i].it;
            if (!strcmp(app_lang, "pl")) return translations[i].pl;
            if (!strcmp(app_lang, "pt")) return translations[i].pt;
            if (!strcmp(app_lang, "ru")) return translations[i].ru;
            if (!strcmp(app_lang, "es")) return translations[i].es;
            if (!strcmp(app_lang, "tr")) return translations[i].tr;
            return translations[i].en;
        }
    }
    return key;
}

static char *trim_ws(char *s) {
    while (*s && isspace((unsigned char)*s)) ++s;
    char *end = s + strlen(s);
    while (end > s && isspace((unsigned char)end[-1])) *--end = 0;
    return s;
}
static int parse_hex_color(const char *s, Fl_Color *out) {
    if (!s || !out) return 0;
    while (*s && isspace((unsigned char)*s)) ++s;
    if (*s == '#') ++s;
    if (strlen(s) != 6) return 0;
    unsigned int r, g, b;
    if (sscanf(s, "%02x%02x%02x", &r, &g, &b) != 3) return 0;
    *out = fl_rgb_color((uchar)r, (uchar)g, (uchar)b);
    return 1;
}
static void set_string_resource(const char *name, const char *value) {
    if (!strcmp(name, "font")) { strncpy(app_font_name, value, sizeof(app_font_name)-1); app_font_name[sizeof(app_font_name)-1] = 0; }
    else if (!strcmp(name, "boldFont")) { strncpy(app_bold_font_name, value, sizeof(app_bold_font_name)-1); app_bold_font_name[sizeof(app_bold_font_name)-1] = 0; }
    else if (!strcmp(name, "monoFont")) { strncpy(app_mono_font_name, value, sizeof(app_mono_font_name)-1); app_mono_font_name[sizeof(app_mono_font_name)-1] = 0; }
    else if (!strcmp(name, "cjkFont")) { strncpy(app_cjk_font_name, value, sizeof(app_cjk_font_name)-1); app_cjk_font_name[sizeof(app_cjk_font_name)-1] = 0; }
    else if (!strcmp(name, "scheme")) { strncpy(app_scheme, value, sizeof(app_scheme)-1); app_scheme[sizeof(app_scheme)-1] = 0; }
    else if (!strcmp(name, "fontSize")) { int v = atoi(value); if (v > 5 && v < 48) app_font_size = v; }
    else if (!strcmp(name, "messageFontSize")) { int v = atoi(value); if (v > 5 && v < 48) app_message_font_size = v; }
    else if (!strcmp(name, "pagingButtonFontSize")) { int v = atoi(value); if (v > 5 && v < 48) app_paging_font_size = v; }
}
static void set_color_resource(const char *name, Fl_Color color) {
    if (!strcmp(name, "background") || !strcmp(name, "dialogBackground")) { app_colors.background = color; app_colors.have_background = 1; }
    else if (!strcmp(name, "fieldBackground")) { app_colors.field_background = color; app_colors.have_field_background = 1; }
    else if (!strcmp(name, "foreground")) { app_colors.foreground = color; app_colors.have_foreground = 1; }
    else if (!strcmp(name, "selection")) { app_colors.selection = color; app_colors.have_selection = 1; }
    else if (!strcmp(name, "menuBackground")) { app_colors.menu_background = color; app_colors.have_menu_background = 1; }
    else if (!strcmp(name, "menuForeground")) { app_colors.menu_foreground = color; app_colors.have_menu_foreground = 1; }
    else if (!strcmp(name, "menuSelection")) { app_colors.menu_selection = color; app_colors.have_menu_selection = 1; }
    else if (!strcmp(name, "inputSelection")) { app_colors.input_selection = color; app_colors.have_input_selection = 1; }
    else if (!strcmp(name, "browserSelection")) { app_colors.browser_selection = color; app_colors.have_browser_selection = 1; }
    else if (!strcmp(name, "scrollbarBackground")) { app_colors.scrollbar_background = color; app_colors.have_scrollbar_background = 1; }
    else if (!strcmp(name, "scrollbarArrow")) { app_colors.scrollbar_arrow = color; app_colors.have_scrollbar_arrow = 1; }
    else if (!strcmp(name, "buttonBackground")) { app_colors.button_background = color; app_colors.have_button_background = 1; }
    else if (!strcmp(name, "buttonForeground")) { app_colors.button_foreground = color; app_colors.have_button_foreground = 1; }
    else if (!strcmp(name, "imageBackground")) { app_colors.image_background = color; app_colors.have_image_background = 1; }
}
static void load_app_resources_from_file(const char *path) {
    FILE *fp = fopen(path, "r");
    if (!fp) return;
    char line[512];
    while (fgets(line, sizeof(line), fp)) {
        char *p = trim_ws(line);
        if (!*p || *p == '!' || *p == '#') continue;
        char *colon = strchr(p, ':');
        if (!colon) continue;
        *colon = 0;
        char *key = trim_ws(p);
        char *value = trim_ws(colon + 1);
        const char *name = 0;
        if (!strncmp(key, "Flpicsee.", 9)) name = key + 9;
        else if (!strncmp(key, "TextEdit.", 9)) name = key + 9;
        if (!name || !*name) continue;
        Fl_Color c;
        if (parse_hex_color(value, &c)) set_color_resource(name, c);
        else set_string_resource(name, value);
    }
    fclose(fp);
}
static void init_app_fonts(void) {
    Fl::set_fonts("*");

    if (!strcmp(app_lang, "zh_CN")) {
        Fl::set_font(FL_HELVETICA, app_cjk_font_name);
        Fl::set_font(FL_HELVETICA_BOLD, app_cjk_font_name);
        Fl::set_font(FL_HELVETICA_ITALIC, app_cjk_font_name);
        Fl::set_font(FL_HELVETICA_BOLD_ITALIC, app_cjk_font_name);
        Fl::set_font(FL_SCREEN, app_cjk_font_name);
        Fl::set_font(FL_SCREEN_BOLD, app_cjk_font_name);
    } else {
        Fl::set_font(FL_HELVETICA, app_font_name);
        Fl::set_font(FL_HELVETICA_BOLD, app_bold_font_name);
        Fl::set_font(FL_HELVETICA_ITALIC, app_font_name);
        Fl::set_font(FL_HELVETICA_BOLD_ITALIC, app_bold_font_name);
        Fl::set_font(FL_SCREEN, app_font_name);
        Fl::set_font(FL_SCREEN_BOLD, app_bold_font_name);
    }

    Fl::set_font(FL_COURIER, app_mono_font_name);
    Fl::set_font(FL_COURIER_BOLD, app_mono_font_name);
    Fl::set_font(FL_COURIER_ITALIC, app_mono_font_name);
    Fl::set_font(FL_COURIER_BOLD_ITALIC, app_mono_font_name);
    Fl::set_font(APP_CJK_FONT, app_cjk_font_name);
    FL_NORMAL_SIZE = app_font_size;
}
static Fl_Font app_ui_font(void) {
    return APP_FONT;
}
static void init_app_colors(void) {
    if (app_colors.have_background) { uchar r, g, b; Fl::get_color(app_colors.background, r, g, b); Fl::background(r, g, b); }
    if (app_colors.have_field_background) { uchar r, g, b; Fl::get_color(app_colors.field_background, r, g, b); Fl::background2(r, g, b); }
    if (app_colors.have_foreground) { uchar r, g, b; Fl::get_color(app_colors.foreground, r, g, b); Fl::foreground(r, g, b); }
}
static void init_common_dialog_labels(void) {
    fl_ok = tr("OK");
    fl_cancel = tr("Cancel");
    fl_yes = tr("Yes");
    fl_no = tr("No");
    fl_close = tr("Close");
    fl_file_chooser_ok_label(tr("OK"));

    Fl_File_Chooser::preview_label = tr("Preview");
    Fl_File_Chooser::new_directory_label = tr("New Directory?");
    Fl_File_Chooser::new_directory_tooltip = tr("Create a new directory.");
    Fl_File_Chooser::hidden_label = tr("Show hidden files");
    Fl_File_Chooser::show_label = tr("Show:");
    Fl_File_Chooser::filename_label = tr("Filename:");
    Fl_File_Chooser::all_files_label = tr("All Files (*)");
    Fl_File_Chooser::custom_filter_label = tr("Custom Filter");
    Fl_File_Chooser::favorites_label = tr("Favorites");
    Fl_File_Chooser::add_favorites_label = tr("Add to Favorites");
    Fl_File_Chooser::manage_favorites_label = tr("Manage Favorites");
    Fl_File_Chooser::filesystems_label = tr("File Systems");
    Fl_File_Chooser::existing_file_label = tr("Please choose an existing file!");
}

static Fl_Window *find_visible_window_by_label(const char *label) {
    if (!label) return 0;
    for (Fl_Window *w = Fl::first_window(); w; w = Fl::next_window(w)) {
        if (w->shown() && w->label() && !strcmp(w->label(), label)) return w;
    }
    return 0;
}

static int app_work_area_w(void) {
    int sw = Fl::w();
    if (sw <= 0 || sw > APP_FILE_CHOOSER_MAX_W) sw = APP_FILE_CHOOSER_MAX_W;
    return sw;
}

static int app_work_area_h(void) {
    int sh = Fl::h();
    if (sh <= 0 || sh > APP_FILE_CHOOSER_WORK_H) sh = APP_FILE_CHOOSER_WORK_H;
    return sh;
}

static void center_window_on_screen(Fl_Window *win) {
    if (!win) return;
    int sw = app_work_area_w();
    int sh = app_work_area_h();
    int x = (sw - win->w()) / 2;
    int y = (sh - win->h()) / 2;

    /* FLTK positions the client window.  IceWM adds its titlebar above it,
       so a mathematically centered 480x266 chooser starts too high on the
       480x320 display with a bottom taskbar.  Keep a small top guard. */
    if (x < 0) x = 0;
    if (y < APP_DIALOG_MIN_Y) y = APP_DIALOG_MIN_Y;
    if (x + win->w() > sw) x = sw - win->w();
    if (y + win->h() > sh) y = sh - win->h();
    if (x < 0) x = 0;
    if (y < APP_DIALOG_MIN_Y && win->h() <= sh - APP_DIALOG_MIN_Y) y = APP_DIALOG_MIN_Y;
    if (y < 0) y = 0;
    win->position(x, y);
}

static void about_dialog_xy(int dlg_w, int dlg_h, int *out_x, int *out_y) {
    int sx = 0;
    int sy = 0;
    int sw = 0;
    int sh = 0;

    Fl::screen_xywh(sx, sy, sw, sh);
    if (sw <= 0 || sw > APP_FILE_CHOOSER_MAX_W) sw = APP_FILE_CHOOSER_MAX_W;
    if (sh <= 0) sh = APP_FILE_CHOOSER_WORK_H + 27;

    const int bottom_reserved_h = 27;
    const int decoration_h = APP_FILE_CHOOSER_TITLEBAR_ROOM;
    int work_h = sh - bottom_reserved_h;
    if (work_h <= 0 || work_h > APP_FILE_CHOOSER_WORK_H) work_h = APP_FILE_CHOOSER_WORK_H;

    /* X and Y must not be treated identically under IceWM/X11.  FLTK requests
       the client-window position, while the visible top edge belongs to the
       window-manager decoration.  Horizontal centering works directly because
       side borders are small/symmetric.  Vertical centering must account for
       the titlebar, otherwise the decorated window is visually pushed to the
       top edge. */
    int x = sx + (sw - dlg_w) / 2;
    int y = sy + (work_h - (dlg_h + decoration_h)) / 2 + decoration_h;

    if (x < sx) x = sx;
    if (x + dlg_w > sx + sw) x = sx + sw - dlg_w;
    if (y < sy + decoration_h) y = sy + decoration_h;
    if (y + dlg_h > sy + work_h) y = sy + work_h - dlg_h;
    if (x < sx) x = sx;
    if (y < sy) y = sy;

    if (out_x) *out_x = x;
    if (out_y) *out_y = y;
}

static void center_about_window_on_screen(Fl_Window *win) {
    if (!win) return;
    int x = 0;
    int y = 0;
    about_dialog_xy(win->w(), win->h(), &x, &y);
    win->position(x, y);
}

static void center_window_on_parent(Fl_Window *win, Fl_Window *parent) {
    if (!win) return;
    if (!parent || !parent->shown()) {
        center_window_on_screen(win);
        return;
    }

    int x = parent->x() + (parent->w() - win->w()) / 2;
    int y = parent->y() + (parent->h() - win->h()) / 2;

    int sw = app_work_area_w();
    int sh = app_work_area_h();
    if (x < 0) x = 0;
    if (y < APP_DIALOG_MIN_Y) y = APP_DIALOG_MIN_Y;
    if (x + win->w() > sw) x = sw - win->w();
    if (y + win->h() > sh) y = sh - win->h();
    if (x < 0) x = 0;
    if (y < APP_DIALOG_MIN_Y && win->h() <= sh - APP_DIALOG_MIN_Y) y = APP_DIALOG_MIN_Y;
    if (y < 0) y = 0;

    win->position(x, y);
}

static void fit_and_center_child_dialog(Fl_Window *win, Fl_Window *parent) {
    if (!win) return;

    int max_w = app_work_area_w();
    int max_h = APP_FILE_CHOOSER_MAX_H;
    int new_w = win->w();
    int new_h = win->h();

    if (new_w > max_w) new_w = max_w;
    if (new_h > max_h) new_h = max_h;
    if (new_w != win->w() || new_h != win->h()) win->size(new_w, new_h);

    /* v016 had the correct base placement.  Keep that centering and add the
       requested three-pixel visual correction after the position is computed. */
    center_window_on_parent(win, parent);
    win->position(win->x(), win->y() + 3);

    win->redraw();
}
static void fit_filechooser_window_by_label(const char *label) {
    Fl_Window *w = find_visible_window_by_label(label);
    if (!w) return;
    int max_w = app_work_area_w();
    int max_h = app_work_area_h();
    if (max_h > APP_FILE_CHOOSER_MAX_H) max_h = APP_FILE_CHOOSER_MAX_H;
    int new_w = w->w();
    int new_h = w->h();
    if (new_w > max_w) new_w = max_w;
    if (new_h > max_h) new_h = max_h;
    if (new_w != w->w() || new_h != w->h()) w->size(new_w, new_h);
    center_window_on_screen(w);
    w->redraw();
}

static void keep_filechooser_size_by_label(const char *label) {
    Fl_Window *w = find_visible_window_by_label(label);
    if (!w) return;
    int max_w = app_work_area_w();
    int max_h = app_work_area_h();
    if (max_h > APP_FILE_CHOOSER_MAX_H) max_h = APP_FILE_CHOOSER_MAX_H;
    int new_w = w->w();
    int new_h = w->h();
    if (new_w > max_w) new_w = max_w;
    if (new_h > max_h) new_h = max_h;
    if (new_w != w->w() || new_h != w->h()) {
        w->size(new_w, new_h);
        w->redraw();
    }
}

static void apply_app_colors(Fl_Widget *w) {
    if (!w) return;
    w->labelfont(app_ui_font());
    w->labelsize(app_font_size);
    if (app_colors.have_background && !dynamic_cast<Fl_Scroll *>(w) && !dynamic_cast<Fl_Box *>(w)) w->color(app_colors.background);
    if (app_colors.have_foreground) w->labelcolor(app_colors.foreground);
    if (app_colors.have_selection && !dynamic_cast<Fl_Scrollbar *>(w)) w->selection_color(app_colors.selection);
    if (Fl_Menu_ *menu = dynamic_cast<Fl_Menu_ *>(w)) {
        menu->textfont(app_ui_font());
        menu->textsize(app_font_size);
        if (app_colors.have_menu_background) menu->color(app_colors.menu_background);
        if (app_colors.have_menu_foreground) menu->textcolor(app_colors.menu_foreground);
        if (app_colors.have_menu_selection) menu->selection_color(app_colors.menu_selection);
    }
    if (Fl_Input_ *input = dynamic_cast<Fl_Input_ *>(w)) {
        input->textfont(app_ui_font());
        input->textsize(app_font_size);
        if (app_colors.have_field_background) input->color(app_colors.field_background);
        if (app_colors.have_input_selection) input->selection_color(app_colors.input_selection);
        else if (app_colors.have_selection) input->selection_color(app_colors.selection);
    }
    if (Fl_Browser_ *browser = dynamic_cast<Fl_Browser_ *>(w)) {
        if (app_colors.have_field_background) browser->color(app_colors.field_background);
        if (app_colors.have_browser_selection) browser->selection_color(app_colors.browser_selection);
        else if (app_colors.have_selection) browser->selection_color(app_colors.selection);
    }
    if (Fl_Scrollbar *scrollbar = dynamic_cast<Fl_Scrollbar *>(w)) {
        if (app_colors.have_scrollbar_background) scrollbar->color(app_colors.scrollbar_background);
        if (app_colors.have_scrollbar_arrow) scrollbar->labelcolor(app_colors.scrollbar_arrow);
        else if (app_colors.have_scrollbar_background) scrollbar->labelcolor(app_colors.scrollbar_background);
    }
    if (Fl_Button *button = dynamic_cast<Fl_Button *>(w)) {
        if (app_colors.have_button_background) button->color(app_colors.button_background);
        if (app_colors.have_button_foreground) button->labelcolor(app_colors.button_foreground);
    }
    if (Fl_Group *g = dynamic_cast<Fl_Group *>(w)) {
        for (int i = 0; i < g->children(); ++i) apply_app_colors(g->child(i));
    }
}
static void apply_app_colors_to_all_windows(void) {
    for (Fl_Window *win = Fl::first_window(); win; win = Fl::next_window(win)) {
        apply_app_colors(win);
    }
}

#ifdef INCL_MENU
static void close_dialog_cb(Fl_Widget *w, void *) {
    if (w && w->window()) w->window()->hide();
}

static void show_about_dialog(Fl_Window *parent) {
    char message[1024];
    snprintf(message, sizeof(message), About_text, APP_VER);

    const int dlg_w = 420;
    const int dlg_h = 238;
    int dlg_x = 0;
    int dlg_y = 0;
    about_dialog_xy(dlg_w, dlg_h, &dlg_x, &dlg_y);
    Fl_Window dlg(dlg_x, dlg_y, dlg_w, dlg_h, tr("About"));
    dlg.set_modal();
    dlg.color(app_colors.have_background ? app_colors.background : FL_BACKGROUND_COLOR);

    Fl_Box text(12, 10, dlg_w - 24, dlg_h - 58, message);
    text.align(FL_ALIGN_LEFT | FL_ALIGN_INSIDE | FL_ALIGN_WRAP);
    text.labelfont(app_ui_font());
    text.labelsize(app_font_size);
    if (app_colors.have_foreground) text.labelcolor(app_colors.foreground);

    Fl_Button ok((dlg_w - 72) / 2, dlg_h - 38, 72, 28, tr("OK"));
    ok.callback(close_dialog_cb);

    dlg.end();
    apply_app_colors(&dlg);
    text.color(dlg.color());
    text.labelfont(app_ui_font());
    text.labelsize(app_font_size);
    if (app_colors.have_foreground) text.labelcolor(app_colors.foreground);
    ok.labelfont(app_ui_font());
    ok.labelsize(app_font_size);
    /* Do not center the About dialog on the image window: the picture window
       can be smaller than this dialog, which clamps x/y to the top-left.
       Center it on the same work area used for file/dialog placement instead. */
    (void)parent;
    center_about_window_on_screen(&dlg);
    dlg.show();
    Fl::check();
    center_about_window_on_screen(&dlg);
    Fl::wait(0.02);
    center_about_window_on_screen(&dlg);
    dlg.redraw();
    while (dlg.shown()) Fl::wait();
}

static const char *help_text_for_current_lang(void) {
    if (!strcmp(app_lang, "ar")) return Help_text_ar;
    if (!strcmp(app_lang, "zh_CN")) return Help_text_zh_CN;
    if (!strcmp(app_lang, "nl")) return Help_text_nl;
    if (!strcmp(app_lang, "fr")) return Help_text_fr;
    if (!strcmp(app_lang, "de")) return Help_text_de;
    if (!strcmp(app_lang, "it")) return Help_text_it;
    if (!strcmp(app_lang, "pl")) return Help_text_pl;
    if (!strcmp(app_lang, "pt")) return Help_text_pt;
    if (!strcmp(app_lang, "ru")) return Help_text_ru;
    if (!strcmp(app_lang, "es")) return Help_text_es;
    if (!strcmp(app_lang, "tr")) return Help_text_tr;
    return Help_text;
}

static void show_help_dialog(Fl_Window *parent) {
    char message[4096];
    snprintf(message, sizeof(message),
             help_text_for_current_lang(),
             tr(LeftClickHelp_text), tr(RightClickHelp_text));

    const int dlg_w = 460;
    const int dlg_h = APP_FILE_CHOOSER_MAX_H - 20;
    int dlg_x = 0;
    int dlg_y = 0;
    about_dialog_xy(dlg_w, dlg_h, &dlg_x, &dlg_y);

    Fl_Window dlg(dlg_x, dlg_y, dlg_w, dlg_h, tr("Help"));
    dlg.set_modal();
    dlg.color(app_colors.have_background ? app_colors.background : FL_BACKGROUND_COLOR);

    int help_font_size = app_message_font_size - 1;
    if (help_font_size < 6) help_font_size = 6;

    Fl_Box text(12, 8, dlg_w - 24, dlg_h - 52, message);
    text.align(FL_ALIGN_LEFT | FL_ALIGN_INSIDE | FL_ALIGN_WRAP);
    text.labelfont(app_ui_font());
    text.labelsize(help_font_size);
    text.color(dlg.color());
    if (app_colors.have_foreground) text.labelcolor(app_colors.foreground);

    Fl_Button ok((dlg_w - 72) / 2, dlg_h - 36, 72, 28, tr("OK"));
    ok.callback(close_dialog_cb);

    dlg.end();
    apply_app_colors(&dlg);
    text.color(dlg.color());
    text.labelfont(app_ui_font());
    text.labelsize(help_font_size);
    if (app_colors.have_foreground) text.labelcolor(app_colors.foreground);
    ok.labelfont(app_ui_font());
    ok.labelsize(app_font_size);

    /* Use the same IceWM-aware screen centering as the About dialog. */
    (void)parent;
    center_about_window_on_screen(&dlg);
    dlg.show();
    Fl::check();
    center_about_window_on_screen(&dlg);
    Fl::wait(0.02);
    center_about_window_on_screen(&dlg);
    dlg.redraw();
    while (dlg.shown()) Fl::wait();
}

#endif


static int saved_popup_selection_color = 0;
static uchar saved_popup_selection_r = 0;
static uchar saved_popup_selection_g = 0;
static uchar saved_popup_selection_b = 0;

static void apply_popup_menu_selection_color(void) {
#ifdef INCL_MENU
    if (!saved_popup_selection_color) {
        Fl::get_color(FL_SELECTION_COLOR,
                      saved_popup_selection_r,
                      saved_popup_selection_g,
                      saved_popup_selection_b);
        saved_popup_selection_color = 1;
    }

    if (app_colors.have_menu_selection) {
        uchar r, g, b;
        Fl::get_color(app_colors.menu_selection, r, g, b);
        Fl::set_color(FL_SELECTION_COLOR, r, g, b);
    } else if (app_colors.have_selection) {
        uchar r, g, b;
        Fl::get_color(app_colors.selection, r, g, b);
        Fl::set_color(FL_SELECTION_COLOR, r, g, b);
    }
#endif
}

static void restore_normal_selection_color(void) {
#ifdef INCL_MENU
    if (saved_popup_selection_color) {
        Fl::set_color(FL_SELECTION_COLOR,
                      saved_popup_selection_r,
                      saved_popup_selection_g,
                      saved_popup_selection_b);
        saved_popup_selection_color = 0;
    }
#endif
}

static void apply_image_area_color(Fl_Widget *w) {
    if (!w) return;
    if (app_colors.have_image_background) w->color(app_colors.image_background);
    else if (app_colors.have_field_background) w->color(app_colors.field_background);
    else w->color(FL_BACKGROUND2_COLOR);
}

static void apply_file_chooser_style(Fl_File_Chooser *fc) {
    if (!fc) return;

    fc->ok_label(tr("OK"));
    fc->textfont(app_ui_font());
    fc->textsize(app_font_size);

    if (app_colors.have_background) fc->color(app_colors.background);
    if (app_colors.have_foreground) fc->textcolor(app_colors.foreground);

    apply_app_colors(fc->newButton);
    apply_app_colors(fc->previewButton);
    apply_app_colors(fc->showHiddenButton);
}

#ifdef INCL_MENU
extern Fl_Menu_Item right_click_menu[];
#endif

static void apply_menu_translations(void) {
#ifdef INCL_MENU
    for (int i = 0; right_click_menu[i].text; ++i) right_click_menu[i].text = tr(right_click_menu[i].text);
#endif
}
static const char *image_filter_string(void) {
    static char buf[512];
    snprintf(buf, sizeof(buf), "%s\t%s\t%s\t%s\t%s\t%s\t%s\t%s",
             tr("Image Files (*.{jpg,jpeg,png,gif,bmp,xbm,xpm})"),
             tr("JPEG Files (*.jpg)"),
             tr("PNG Files (*.png)"),
             tr("GIF Files (*.gif)"),
             tr("BMP Files (*.bmp)"),
             tr("XBM Files (*.xbm)"),
             tr("XPM Files (*.xpm)"),
             tr("All Files (*)"));
    return buf;
}
static void init_app_style(void) {
    app_lang = detect_app_language();
    load_app_resources_from_file("/usr/share/X11/app-defaults/Flpicsee");
    init_app_fonts();
    Fl::scheme(app_scheme);
    init_app_colors();
    init_common_dialog_labels();
    Fl_Tooltip::font(app_ui_font());
    Fl_Tooltip::size(app_font_size);
    fl_message_font(app_ui_font(), app_message_font_size);
    apply_menu_translations();
}

enum {NATIVE_ZOOM = 0, WHOLE_IMG_ZOOM = 1, FIT_ZOOM = 2, SPEC_ZOOM};

enum {  MI_100_ZOOM = 0, MI_200_ZOOM, MI_400_ZOOM,
        MI_WHOLE_ZOOM, MI_FIT_ZOOM, 
        MI_ABOUT, MI_HELP, MI_OPEN,
#ifdef INCL_PAGING
        MI_PREV, MI_NEXT, MI_SLIDESHOW
#endif
};
    
enum {JPG_TYPE = 1, PNG_TYPE, GIF_TYPE, BMP_TYPE, XPM_TYPE, XBM_TYPE};

float ZoomFactor[] = {1.00, 2.00, 4.00};
enum {PAGING_PREV = 1, PAGING_NEXT = 2, PAGING_NEW = 3};

class Fl_Pic_Window; // forward reference

class image_set_item
{
    public:
        Fl_Pic_Window*  wnd_p;
        //Fl_Box*    pic_box_p;

#ifdef INCL_PAGING
        image_set_item* prev_p;
        image_set_item* next_p;
#endif
        char fullfilename[256];
        char imgname[256];
        char imgpath[256];
        char ext[8];
        time_t filedate;
        Fl_Image * im_orig_p; 
        Fl_Image * im_full_p;
        Fl_Image * im_fit_p;
        Fl_Image * im_spec_p;   // zoomed to a specified level
        int zoommode;
        int img_h, img_w;   // original size of image
        int ful_h, ful_w;   // size of image so that the full image is visible without scrolling in current window
        int fit_h, fit_w;   // size of image so it fills current window with scrolling in only one dimension
        int spec_h, spec_w; // size of zoomed image at a specified "nice" zoom ratio
        int scn_h, scn_w;   // screen size (X-Windows screen dimension)
        int wnd_h, wnd_w;   // current window size
        int xoffset, yoffset;
        float zoompct;      // scaling "zoom" as ratio, 1.00 = 100%
        char scalestr[8];
        char buf[256];
        char *p;
        int len;
        float spec_zoom_ratio;
        
        float img_hwratio, wnd_hwratio, scn_hwratio;

        image_set_item(Fl_Pic_Window*  my_wnd_p, char* filename);
        ~image_set_item() ;
#ifdef INCL_PAGING
        image_set_item* link_after(image_set_item* newitem_p);
#endif
        void scale_image(void); 
        void resize(int x, int y, int w, int h);
        void handle_zoom(int dy);
        int  load_image(void);

        
};

#ifdef INCL_PAGING
int Slideshow = 0;
int TimeForNextSlide_t = -1;
int SlideInterval_sec = 6;
class rect
{
    public:
        int x;
        int y;
        int w;
        int h;
        rect(int xx, int yy, int ww, int hh) : x(xx), y(yy), w(ww), h(hh) {};
};
#endif

#ifdef INCL_MENU
static void MenuCB(Fl_Widget* window_p, void *userdata);
Fl_Menu_Item right_click_menu[20] = {
#ifdef INCL_PAGING
    {"&prev. Image",        FL_CTRL+'p',    MenuCB, (void*)MI_PREV},
    {"&next Image",         FL_CTRL+'n',    MenuCB, (void*)MI_NEXT},
    {"&slideshow start/stop",FL_CTRL+'s',    MenuCB, (void*)MI_SLIDESHOW,FL_MENU_DIVIDER},
#endif
    
    {"&100% zoom",          FL_CTRL+'1', MenuCB, (void*)MI_100_ZOOM},
    {"&200% zoom",          FL_CTRL+'2', MenuCB, (void*)MI_200_ZOOM},
    {"&400% zoom",          FL_CTRL+'4', MenuCB, (void*)MI_400_ZOOM,},
    {"&whole image",        FL_CTRL+'w', MenuCB, (void*)MI_WHOLE_ZOOM},
    {"&open another...",    FL_CTRL+'o', MenuCB, (void*)MI_OPEN, FL_MENU_DIVIDER},
    {"&help",               FL_CTRL+'h', MenuCB, (void*)MI_HELP},
    {"&about",              FL_CTRL+'a', MenuCB, (void*)MI_ABOUT},
    {0}
};
#endif

int Running = 0;
int GetAnotherImage = 0;
int Images = 0;
char Filename[256] = {0};
image_set_item* HeadImgItem_p = NULL;
Fl_File_Chooser* FCD_p = NULL;

static void recreate_file_chooser(void) {
    /* Do not reuse Fl_File_Chooser after Cancel.  On IceWM/Xfbdev the reused
       chooser window can sometimes be remapped with stale decoration geometry,
       which makes it appear one titlebar too high or jump into place.  Creating
       a fresh chooser gives IceWM a clean toplevel window every time while the
       caller can still read count()/value() after select_image_file() returns. */
    if (FCD_p) {
        delete FCD_p;
        FCD_p = NULL;
    }

    FCD_p = new Fl_File_Chooser("~",
                image_filter_string(),
#ifdef INCL_PAGING
                Fl_File_Chooser::MULTI,
#else
                Fl_File_Chooser::SINGLE,
#endif
                tr("Select Image File"));
    apply_file_chooser_style(FCD_p);
}

char * select_image_file(void) {
    const char *chooser_label = tr("Select Image File");
    recreate_file_chooser();
    FCD_p->show();
    while (FCD_p->visible() == 1 && !find_visible_window_by_label(chooser_label)) {
        Fl::wait();
    }
    fit_filechooser_window_by_label(chooser_label);
    apply_app_colors_to_all_windows();

    Fl_Window *chooser_win = find_visible_window_by_label(chooser_label);
    Fl_Window *manage_favorites_win = 0;
    const char *manage_favorites_label = tr("Manage Favorites");
    int manage_favorites_last_w = -1;
    int manage_favorites_last_h = -1;

    while (FCD_p->visible() == 1) {
        Fl::wait();

        /* Fl_File_Chooser reuses the same internal window.  After Cancel and a
           later show(), FLTK can restore/recompute its default size.  Keep the
           compact size, but do not re-center it on every event because that
           makes the Manage Favorites child dialog jump vertically. */
        keep_filechooser_size_by_label(chooser_label);

        Fl_Window *w = find_visible_window_by_label(manage_favorites_label);
        if (w) {
            if (!chooser_win || !chooser_win->shown()) chooser_win = find_visible_window_by_label(chooser_label);
            if (w != manage_favorites_win ||
                w->w() != manage_favorites_last_w ||
                w->h() != manage_favorites_last_h) {
                fit_and_center_child_dialog(w, chooser_win);
                manage_favorites_win = w;
                manage_favorites_last_w = w->w();
                manage_favorites_last_h = w->h();
            }
        } else {
            manage_favorites_win = 0;
            manage_favorites_last_w = -1;
            manage_favorites_last_h = -1;
        }
    }
    if (FCD_p->value()) {
        strncpy(Filename, FCD_p->value(), 255);
        return Filename;
    }
    else {
        *Filename = '\0';
        return NULL;
    }
}

#ifdef INCL_PAGING
static void PagingCB(Fl_Widget* window_p, void *data);

int pt_in_rect(int x, int y, rect* r)
{
    if (x < r->x)           return 0;
    if (x >= r->x + r->w)   return 0;
    if (y < r->y)           return 0;
    if (y >= r->y + r->h)   return 0;

    // otherwise...
    return 1;
}
#endif


class ImageScroll : public Fl_Scroll {
public:
    ImageScroll(int X, int Y, int W, int H, const char *L = 0)
        : Fl_Scroll(X, Y, W, H, L) {}

    int effective_scrollbar_size(void) const {
        int sb = scrollbar_size();
        if (sb <= 0) sb = Fl::scrollbar_size();
        if (sb < 0) sb = 0;
        return sb;
    }

    int visible_view_w(void) const {
        int vw = w();
        if (scrollbar.visible()) vw -= effective_scrollbar_size();
        return (vw > 0) ? vw : 1;
    }

    int visible_view_h(void) const {
        int vh = h();
        if (hscrollbar.visible()) vh -= effective_scrollbar_size();
        return (vh > 0) ? vh : 1;
    }
};

class Fl_Pic_Window : public Fl_Window {
protected:  
    char wintitle[256];
    //char tiptitle[256];
    int fullscreen_view;
    int saved_x;
    int saved_y;
    int saved_w;
    int saved_h;
    int saved_zoommode;
    float saved_zoompct;
    int fullscreen_image_changed;
    int suppress_left_release;
    int pending_left_click;
    unsigned long pending_left_click_ms;
    int pending_left_click_x;
    int pending_left_click_y;
    int handle(int e) ;
    static void single_click_timeout_cb(void *data);
    void single_click_timeout(void);
    void cancel_pending_single_click(void);
    void center_image_in_view(void);
    void schedule_center_image_after_layout(void);
    void cancel_center_image_after_layout(void);
    void center_image_after_layout(void);
    static void center_image_after_layout_cb(void *data);
    void scroll_viewport_for_child(int child_w, int child_h, int *view_w, int *view_h);
    int pending_center_after_layout;

public:
    Fl_Box*    pic_box_p;
    ImageScroll* scroll_p; //scroll(0, 0, wnd_w, wnd_h);
    image_set_item* img_p;
#ifdef INCL_PAGING
    Fl_Button* prev_paging_btn_p;
    rect       prev_paging_rect;
    Fl_Button* next_paging_btn_p;
    rect       next_paging_rect;
#endif
    
    Fl_Pic_Window();
    
    ~Fl_Pic_Window();

    void resize(int x, int y, int w, int h);
    
    void specify_zoom(int zoom_mode, float zoom_pct);

    void toggle_fullscreen_view(void);

    void reset_image_view_for_new_image(void);

    void fit_window_to_current_image(void);

    void advance_click_zoom(void);

    void set_titles(void);

    void delete_image(void);
    
    void setup(void);
    
    void do_menu(void);
    
#ifdef INCL_PAGING      
    void scale_paging_buttons(int wnd_w, int wnd_h);
    int image_index(void);
#endif
    
};

Fl_Pic_Window* MainWnd_p = NULL;


image_set_item::image_set_item(Fl_Pic_Window*  my_wnd_p, char* filename) 
{
    wnd_p = my_wnd_p;
    bzero(fullfilename, 256);
    strncpy(fullfilename, filename, 255);
    
#ifdef INCL_PAGING
    prev_p      = this; // linked to just itself initially
    next_p      = this;
#endif
    imgname[0]  = '\0';
    imgpath[0]  = '\0';
    ext[0]      = '\0';
    filedate    = (time_t)0;
    im_orig_p   = NULL; 
    im_full_p   = NULL;
    im_fit_p    = NULL;
    im_spec_p   = NULL;
}

image_set_item::~image_set_item() {
    if (im_orig_p)  delete im_orig_p; 
    if (im_full_p)  delete im_full_p;
    if (im_fit_p)   delete im_fit_p;
    if (im_spec_p)  delete im_spec_p;
}

#ifdef INCL_PAGING
image_set_item* image_set_item::link_after(image_set_item* newitem_p) {
    image_set_item * nextnext_p = next_p; 
    
    if (next_p == this) {
        // special case: there is no other node yet, link them to each other
        newitem_p->next_p = this;
        newitem_p->prev_p = this;
        prev_p = newitem_p;
        next_p = newitem_p;
    }
    newitem_p->next_p = nextnext_p;
    nextnext_p->prev_p = newitem_p;
    
    newitem_p->prev_p = this;
    next_p = newitem_p;
    
    return newitem_p;
}
#endif

static int image_view_pos(int view, int image)
{
    return (image < view) ? ((view - image) / 2) : 0;
}

void image_set_item::scale_image(void) 
{
    int px, py;

    wnd_w = wnd_p->scroll_p ? wnd_p->scroll_p->w() : wnd_p->w();
    wnd_h = wnd_p->scroll_p ? wnd_p->scroll_p->h() : wnd_p->h();

    if (zoommode == WHOLE_IMG_ZOOM && wnd_p->scroll_p) {
        /* Returning from a large zoom must start from the scroll origin.
         * Otherwise the old logical offset can keep a now-fitting image
         * outside the visible frame until the scrollbars are touched.
         */
        wnd_p->scroll_p->scroll_to(0, 0);
    }

    switch(zoommode) {
    case NATIVE_ZOOM:
        px = image_view_pos(wnd_w, img_w);
        py = image_view_pos(wnd_h, img_h);
        wnd_p->pic_box_p->resize(px, py, img_w, img_h);
        wnd_p->pic_box_p->image(im_orig_p);  
        zoompct = 1.00;
        break;
    case WHOLE_IMG_ZOOM:
        px = image_view_pos(wnd_w, ful_w);
        py = image_view_pos(wnd_h, ful_h);
        wnd_p->pic_box_p->resize(px, py, ful_w, ful_h);
        if (!im_full_p) {
            im_full_p = im_orig_p->copy(ful_w, ful_h);
        } 
        wnd_p->pic_box_p->image(im_full_p);
        zoompct = ((float)ful_w) / (float)img_w;
        break;
    case FIT_ZOOM:
        px = image_view_pos(wnd_w, fit_w);
        py = image_view_pos(wnd_h, fit_h);
        wnd_p->pic_box_p->resize(px, py, fit_w, fit_h);
        if (!im_fit_p) {
            im_fit_p = im_orig_p->copy(fit_w, fit_h);
        } 
        wnd_p->pic_box_p->image(im_fit_p);
        zoompct = ((float)fit_w)/ (float)img_w;
        break;
    case SPEC_ZOOM:
        spec_w = (int)(zoompct * (float)img_w);
        spec_h = (int)(zoompct * (float)img_h);
        px = image_view_pos(wnd_w, spec_w);
        py = image_view_pos(wnd_h, spec_h);
        wnd_p->pic_box_p->resize(px, py, spec_w, spec_h);
        if (!im_spec_p || im_spec_p->w() != spec_w || im_spec_p->h() != spec_h) {
            if (im_spec_p) {
                delete im_spec_p;
            }
            im_spec_p = im_orig_p->copy(spec_w, spec_h);
        }
        wnd_p->pic_box_p->image(im_spec_p);
        break;
    }

    #ifdef INCL_PAGING
    wnd_p->scale_paging_buttons(wnd_w, wnd_h);
    #endif

    if (wnd_p->scroll_p) wnd_p->scroll_p->scroll_to(0, 0);
    wnd_p->set_titles();
}

void image_set_item::resize(int x, int y, int w, int h) {
    wnd_w = w;
    wnd_h = h;

    wnd_hwratio = (float)wnd_h / (float)wnd_w;
    xoffset = 0;
    yoffset = 0;

    if (img_hwratio > wnd_hwratio) {
        ful_h = h;
        ful_w = (int)((float)ful_h / img_hwratio);
        fit_w = w - 32;  // allow room for scrollbar
        fit_h = (int)((float)fit_w * img_hwratio);
    }
    else {
        ful_w = w;
        ful_h = (int)((float)ful_w * img_hwratio);
        fit_h = h - 32; // allow room for scrollbar
        fit_w = (int)((float)fit_h / img_hwratio);
    } 
    if (im_full_p) {
        delete im_full_p;
    } 
    if (im_fit_p) {
        delete im_fit_p;
    } 
    im_full_p = NULL;
    im_fit_p  = NULL;
    scale_image();
}

void image_set_item::handle_zoom(int dy) {
    if (dy > 0) {
        if (zoommode < FIT_ZOOM) zoommode++;
    }
    else if (dy < 0) {
        if (zoommode > NATIVE_ZOOM) zoommode--;
    }
    scale_image();                  
}

// returns 1 or higher if filename has a known file type, 0 if not
int file_image_type(const char* fullfilename) 
{
    int img_type = 0; 
    int imfd = open(fullfilename, O_RDONLY);
    if (-1 == imfd) {
        return img_type;
    }
    
    char imbyte[16];
    unsigned char* imubyte = (unsigned char*)imbyte; 
    if (16 != read(imfd, imbyte, 16)) {
        close(imfd);
        return img_type;
    }

    if      (!strncmp(imbyte+6, "JFIF", 4))  img_type = JPG_TYPE;
    else if (!strncmp(imbyte+6, "Exif", 4))  img_type = JPG_TYPE;
    else if (   (imubyte[0] == 0xFF) 
             && (imubyte[1] == 0xD8) )       img_type = JPG_TYPE;
    else if (!strncmp(imbyte+1, "PNG",  3))  img_type = PNG_TYPE;
    else if (!strncmp(imbyte+0, "GIF",  3))  img_type = GIF_TYPE;
    else if (!strncmp(imbyte+0, "BM",   2))  img_type = BMP_TYPE;
    else if (!strncmp(imbyte+3, "XPM",  3))  img_type = XPM_TYPE;
    else if (!strncmp(imbyte+0, "#def", 4))  img_type = XBM_TYPE;
    close(imfd);
//printf("Image type is %d\nHeader bytes: ", img_type); fflush(0);
//int n;
//for (n = 0; n < 16; n++) printf("0x%02X ", imubyte[n]);
//printf("\n");
    return img_type;
}

int image_set_item::load_image(void)
{
    char *fn_p;
    bzero(imgpath, 256);
    bzero(imgname, 256);
    bzero(scalestr, 8);
    
    zoommode = 0;
    zoompct  = 1.00;
    spec_zoom_ratio = 1.00;
    scn_w = Fl::w();
    scn_h = Fl::h() - 48;  // Amount claimed by window frame/title and perhaps system taskbar

    strcpy(scalestr, " 100%");

    len = strlen(fullfilename);
    if (len > 4 && strstr(fullfilename, "/")) {
        strncpy(imgpath, fullfilename, 255);
        fn_p = imgpath + len - 1;
        while (*fn_p != '/'&& fn_p > imgpath) {
            fn_p--;
        }
        if (*fn_p == '/') { 
            *fn_p = '\0';
            fn_p++;
        }
        strncpy(imgname, fn_p, 255);
    }
    else {
        getcwd(imgpath, 255);
        strcpy(imgname, fullfilename);
    }

    switch(file_image_type(fullfilename)) {
        case JPG_TYPE:
            im_orig_p = new Fl_JPEG_Image(fullfilename); 
            break;
        case PNG_TYPE:
            im_orig_p = new Fl_PNG_Image(fullfilename);
            break;
        case BMP_TYPE:
            im_orig_p = new Fl_BMP_Image(fullfilename);
            break;
        case GIF_TYPE:
            im_orig_p = new Fl_GIF_Image(fullfilename); 
            break;
        case XBM_TYPE:
            im_orig_p = new Fl_XBM_Image(fullfilename); 
            break;
        case XPM_TYPE:
            im_orig_p = new Fl_XPM_Image(fullfilename); 
            break;
        default:
            im_orig_p = NULL;
            return 0;
    }
    
    img_h = im_orig_p->h(); 
    img_w = im_orig_p->w(); 
    spec_h = img_h;
    spec_w = img_w;

    img_hwratio = (float)img_h / (float)img_w;
    wnd_hwratio = (float)wnd_h / (float)wnd_w;
    scn_hwratio = (float)scn_h / (float)scn_w;
    xoffset = 0;
    yoffset = 0;

    if ((img_h < scn_h) && (img_w < scn_w)) {
        zoommode = 0; // native 1:1 scaling
        wnd_h = img_h;
        wnd_w = img_w;
        ful_h = img_h;
        ful_w = img_w;
        fit_h = img_h;
        fit_w = img_w;
        if (wnd_h < 90) {
            wnd_h = 90;
        }
        if (wnd_w < 120) {
            wnd_w = 120;
        }
    }
    else {
        zoommode = 1; // view whole image scaling
        if (img_hwratio > scn_hwratio) {
            ful_h = scn_h;
            ful_w = (int)((float)ful_h / img_hwratio);
            fit_w = scn_w - 20;  // allow room for scrollbar
            fit_h = (int)((float)fit_w * img_hwratio);
        }
        else {
            ful_w = scn_h;
            ful_h = (int)((float)ful_w * img_hwratio);
            fit_h = scn_h - 20; // allow room for scrollbar
            fit_w = (int)((float)ful_h / img_hwratio);
        }
        wnd_h = ful_h;
        wnd_w = ful_w;
    }
    im_full_p = im_orig_p->copy(ful_w, ful_h);
    im_fit_p = im_orig_p->copy(fit_w, fit_h);
    return 1;
}

Fl_Pic_Window::Fl_Pic_Window() 
    :   Fl_Window(Fl::w(), Fl::h())
#ifdef INCL_PAGING
    , 
        prev_paging_rect(10, 10, 64, 32),
        next_paging_rect(50, 10, 64, 32)
#endif
{
    scroll_p  = NULL;
    pic_box_p = NULL;
    
    img_p = NULL;
    fullscreen_view = 0;
    saved_x = saved_y = saved_w = saved_h = 0;
    saved_zoommode = WHOLE_IMG_ZOOM;
    saved_zoompct = 1.0f;
    fullscreen_image_changed = 0;
    suppress_left_release = 0;
    pending_left_click = 0;
    pending_left_click_ms = 0;
    pending_left_click_x = 0;
    pending_left_click_y = 0;
    pending_center_after_layout = 0;
    
}

Fl_Pic_Window::~Fl_Pic_Window() {
    cancel_pending_single_click();
    cancel_center_image_after_layout();
    delete pic_box_p;
    delete scroll_p; 
    delete img_p;
}

void Fl_Pic_Window::resize(int x, int y, int w, int h)  {
    int old_w = this->w();
    int old_h = this->h();
    int size_changed = (w != old_w || h != old_h);

    Fl_Window::resize(x, y, w, h);

    /*
     * IceWM/X11 sends ConfigureNotify also when only the top-level window
     * position changes. During title-bar window movement the client size is
     * unchanged, so recalculating scaled images and forcing redraw() here only
     * burns CPU/SPI bandwidth on small embedded systems.
     */
    if (size_changed && img_p) {
        /*
         * Manual window resizing is treated as a layout change, not as an
         * image zoom action. After the user makes the window larger/smaller,
         * always recompute the image as "whole image visible in the window".
         * This avoids leaving a previous 100/200/400% zoom with stale scroll
         * geometry after an interactive resize.
         */
        cancel_pending_single_click();
        cancel_center_image_after_layout();
        img_p->zoommode = WHOLE_IMG_ZOOM;
        img_p->zoompct = 1.0f;

        if (scroll_p) {
            scroll_p->resize(0, 0, w, h);
            scroll_p->scroll_to(0, 0);
        }
        img_p->resize(0, 0, w, h);
        if (scroll_p) scroll_p->scroll_to(0, 0);
        center_image_in_view();
        schedule_center_image_after_layout();
        if (pic_box_p) pic_box_p->redraw();
        if (scroll_p) scroll_p->redraw();
        redraw();
    }
}
    
void Fl_Pic_Window::set_titles(void) {
    sprintf(img_p->scalestr, "%4d%%", (int) (100.0 * img_p->zoompct));
#ifdef INCL_PAGING
    char index_str[16] = {0};
    if (Images > 1) {
        sprintf(index_str, " %d %s %d", image_index(), tr("of"), Images);
    }
    sprintf(wintitle, "%s%s %s - Flpicsee %s (%s/%s)%s", 
            Slideshow ? tr("SLIDESHOW: ") : "",
            img_p->scalestr, img_p->imgname, APP_VER, 
            img_p->imgpath, img_p->imgname, 
            (Images > 1) ? index_str : "");
#else
    sprintf(wintitle, "%s %s - Flpicsee %s (%s/%s)", img_p->scalestr, img_p->imgname, APP_VER, img_p->imgpath, img_p->imgname);
#endif
    label(wintitle);
}

#ifdef INCL_PAGING
void Fl_Pic_Window::scale_paging_buttons(int wnd_w, int wnd_h) 
{
    prev_paging_rect.y = 8;
    prev_paging_rect.h = MAX(24, wnd_h/20);
    prev_paging_btn_p->resize(prev_paging_rect.x, prev_paging_rect.y,prev_paging_rect.w, prev_paging_rect.h);

    next_paging_rect.x = wnd_w - 64;
    next_paging_rect.y = 8;
    next_paging_rect.h = MAX(24, wnd_h/20);
    next_paging_btn_p->resize(next_paging_rect.x, next_paging_rect.y,next_paging_rect.w, next_paging_rect.h);
}
#endif

#ifdef INCL_MENU
static int popup_menu_measured_h(void) {
    int menu_h = 0;

    for (int i = 0; right_click_menu[i].text; ++i) {
        int item_h = 0;

        /* FLTK 1.3 measure(int *h, const Fl_Menu_*) gives the
           measured label/menu-item height, but the popup row still has
           a small vertical breathing space around the label. v56 used
           the raw measured value and was too low. v55/v54 also added
           title rows, separator rows and frame margins, which made the
           result far too high. Keep only the per-row correction. */
        (void)right_click_menu[i].measure(&item_h, 0);
        if (item_h <= 0) item_h = FL_NORMAL_SIZE;

        menu_h += item_h + 4;
    }

    /* item_h+4 is still about 8--10 px shorter than the real
       popup. Add this once for the whole menu, not per row. */
    return menu_h + 9;
}

static int popup_menu_sample_row_h(void) {
    int item_h = 0;

    if (right_click_menu[0].text) {
        (void)right_click_menu[0].measure(&item_h, 0);
    }
    if (item_h <= 0) item_h = FL_NORMAL_SIZE;

    return item_h + 4;
}

static int popup_menu_local_y_fit(int base_local_y) {
    int sx, sy, sw, sh;
    Fl::screen_xywh(sx, sy, sw, sh);

    /* Keep the v49 anchoring: popup Y is local to the event window
       and starts at the top of the image window. The window/root
       coordinates are used only to decide how much this local Y must
       be raised before FLTKs own popup placement code has to clamp it. */
    int local_y = base_local_y;
    int menu_h = popup_menu_measured_h();
    int event_window_screen_y = Fl::event_y_root() - Fl::event_y();
    int menu_screen_y = event_window_screen_y + local_y;
    int screen_bottom = sy + sh;

    int overflow = (menu_screen_y + menu_h) - screen_bottom;
    if (overflow > 0) local_y -= overflow;

    return local_y;
}

void Fl_Pic_Window::do_menu(void) {
    apply_popup_menu_selection_color();

    /* Keep X exactly as in v37. Only Y is fixed.
       Y is local to the event window and anchored to the window top,
       with measured bottom-fit correction. In fullscreen there is no
       window-manager title bar above the client area, so the same local
       Y=0 can put FLTKs popup title row partly above the visible screen.
       Add one measured row only for fullscreen; leave normal window
       placement unchanged. v67 lowers the fullscreen popup by another
       24 px because v66 still opened it slightly too high. */
    int popup_x = x() + Fl::event_x();
    int popup_base_y = fullscreen_view ? (popup_menu_sample_row_h() + 24) : 0;
    int popup_y = popup_menu_local_y_fit(popup_base_y);

    const Fl_Menu_Item *m = right_click_menu->popup(popup_x, popup_y, tr("Flpicsee"), 0, 0);
    restore_normal_selection_color();
    if ( m ) m->do_callback(this, m->user_data());
};
#endif
static unsigned long app_now_ms(void) {
    struct timeval tv;
    gettimeofday(&tv, NULL);
    return (unsigned long)(tv.tv_sec * 1000UL + tv.tv_usec / 1000UL);
}

#define APP_DOUBLECLICK_MS 250UL

int Fl_Pic_Window::handle(int e) {
    char s[200];
    int ret = 0;
    int dy = 0;
    int needredraw = 0;
    int newxpos, newypos;
    int scrlxend = 0;
    int scrlyend = 0;
    static int dragx = 0;
    static int dragy = 0;
    static int scrlx = 0;
    static int scrly = 0;
    static int prevxpos = 0;
    static int prevypos = 0;
    static int ctrl_pressed = 0;
    static char tiptext[128] = {0};
    int key;
    switch ( e ) {
#ifdef INCL_MENU
        case FL_KEYDOWN:
            key = Fl::event_key();
//            printf("You pressed key %d (0x%4X)\n", key, key);
            if (key == FL_Escape && fullscreen_view) {
                toggle_fullscreen_view();
                return 1;
            }
            if (key == FL_Control_L || key == FL_Control_R) {
                ctrl_pressed = 1;
            }
            if (key == FL_Menu || key == 0xFFEC || key == 0 ) {                
                do_menu();
                return 1;
            } 
            else if (key == '-') {
                dy = +1;
                img_p->handle_zoom(dy);
                redraw(); 
                return 1;                
            }
            else if (key == '=') {
                dy = -1;
                img_p->handle_zoom(dy);
                redraw(); 
                return 1;                
            }
#ifdef INCL_PAGING
            else if (Images > 1 && img_p && img_p->zoommode == WHOLE_IMG_ZOOM && key == FL_Left) {
                PagingCB((Fl_Widget*)NULL, (void *)PAGING_PREV);
                return 1;
            }
            else if (Images > 1 && img_p && img_p->zoommode == WHOLE_IMG_ZOOM && key == FL_Right) {
                PagingCB((Fl_Widget*)NULL, (void *)PAGING_NEXT);
                return 1;
            }
            else if (Images > 1 && (key == FL_Page_Up || key == FL_BackSpace)) {
                PagingCB((Fl_Widget*)NULL, (void *)PAGING_PREV);
                return 1;
            }
            else if (Images > 1 && (key == FL_Page_Down || key == ' ')) {
                PagingCB((Fl_Widget*)NULL, (void *)PAGING_NEXT);
                return 1;
            }
#endif
            else if (ctrl_pressed) {
                int choice = 0;
                switch(key) {
                    case 'a': choice = MI_ABOUT; break;
                    case 'h': choice = MI_HELP; break;
#ifdef INCL_PAGING
                    case 'p': 
                    case FL_BackSpace:
                    case FL_Up: choice = MI_PREV; break;
                    case 'n':
                    case ' ':
                    case FL_Down: choice = MI_NEXT; break;
                    case 's': choice = MI_SLIDESHOW; break;
#endif
                    case '1': choice = MI_100_ZOOM; break;
                    case '2': choice = MI_200_ZOOM; break;
                    case '4': choice = MI_400_ZOOM; break;
                    case 'w': choice = MI_WHOLE_ZOOM; break;
                    case 'o': choice = MI_OPEN; break;
                    default: 
                        //printf("You pressed key %d (0x%4X)\n", key, key);
                        break;
                }
                if (choice) MenuCB(this, (void*)choice);
            }
            break;
        case FL_KEYUP:
            key = Fl::event_key();
            if (key == FL_Control_L || key == FL_Control_R) {
                ctrl_pressed = 0;
            }
            if ((key == FL_Up || key == '=')) {             
                return 1;
            }
            break;
#endif
        case FL_PUSH:
            dragx = Fl::event_x();
            dragy = Fl::event_y();
            if ( Fl::event_button() == FL_LEFT_MOUSE ) {
                unsigned long now_ms = app_now_ms();
                if (pending_left_click &&
                    now_ms - pending_left_click_ms <= APP_DOUBLECLICK_MS &&
                    abs(dragx - pending_left_click_x) < 3 &&
                    abs(dragy - pending_left_click_y) < 3) {
                    cancel_pending_single_click();
                    suppress_left_release = 1;
                    toggle_fullscreen_view();
                    return 1;
                }
                else if (pending_left_click) {
                    cancel_pending_single_click();
                }
                if (!Fl_Window::handle(e)) {
                    label(tr(LeftClickHelp_text));
                    scrlx = scroll_p->xposition();
                    prevxpos = scrlx;
                    scrly = scroll_p->yposition();
                    prevypos = scrly;
                    fl_cursor(FL_CURSOR_MOVE, FL_BLACK, FL_WHITE);
                    return 1;
                }
            }
#ifdef INCL_MENU
            else if (Fl::event_button() == FL_RIGHT_MOUSE ) {
                tooltip("");
                do_menu();
                return(1);          // (tells caller we handled this event)
            }
#endif
            break;
        case FL_DRAG:
            if ( Fl::event_button() == FL_LEFT_MOUSE ) {
                if (!Fl_Window::handle(e)) {
                    newxpos = scroll_p->xposition();
                    newypos = scroll_p->yposition();
                    if (scroll_p->w() < pic_box_p->w()) {
                        newxpos = scrlx - (Fl::event_x() - dragx);
                        if (newxpos < 0) newxpos = 0;
                        scrlxend = pic_box_p->w() - scroll_p->w() + 16;
                        if (newxpos > scrlxend) newxpos = scrlxend;
                        if (    (newxpos - prevxpos) < -16 || (newxpos - prevxpos) > 16
                            ||  newxpos == 0 || newxpos == scrlxend) {
                            needredraw = 1;
                        }
                    }
                    if (scroll_p->h() < pic_box_p->h()) {
                        newypos = scrly - (Fl::event_y() - dragy);
                        if (newypos < 0) newypos = 0;
                        scrlyend = pic_box_p->h() - scroll_p->h() + 16;
                        if (newypos > scrlyend) newypos = scrlyend;
                        if (    (newypos - prevypos) < -16 || (newypos - prevypos) > 16 
                            ||  newypos == 0 || newypos == scrlyend) {
                            needredraw = 1;
                        }
                    }
                    if (needredraw) {
                        prevxpos = newxpos;
                        prevypos = newypos;
                        scroll_p->scroll_to(newxpos, newypos);
                        redraw();
                    }
                    return 1;
                }
            }
            break;
        case FL_RELEASE:
            if ( Fl::event_button() == FL_LEFT_MOUSE) {
                if (suppress_left_release) {
                    suppress_left_release = 0;
                    fl_cursor(FL_CURSOR_DEFAULT, FL_BLACK, FL_WHITE);
                    set_titles();
                    return 1;
                }
                if (!Fl_Window::handle(e)) {
                    if (abs(dragx - Fl::event_x()) < 3 && abs(dragy - Fl::event_y()) < 3) {
                        cancel_pending_single_click();
                        pending_left_click = 1;
                        pending_left_click_ms = app_now_ms();
                        pending_left_click_x = Fl::event_x();
                        pending_left_click_y = Fl::event_y();
                        Fl::add_timeout((double)APP_DOUBLECLICK_MS / 1000.0, single_click_timeout_cb, this);
                    }
                    fl_cursor(FL_CURSOR_DEFAULT, FL_BLACK, FL_WHITE);
                    set_titles();
                    return 0;
                }
            }
            break;
            
#ifdef INCL_PAGING              
        case FL_MOVE:
            if (Images > 1 && pt_in_rect( Fl::event_x(), Fl::event_y(), &prev_paging_rect   )) {
                prev_paging_btn_p->show();
                sprintf(tiptext, "Prev: %s", img_p->prev_p->fullfilename);
                prev_paging_btn_p->tooltip(tiptext);
                Fl_Tooltip::enter(prev_paging_btn_p);
                return 0;
            } 
            else if (Images > 1 && pt_in_rect( Fl::event_x(), Fl::event_y(), &next_paging_rect )) {
                next_paging_btn_p->show();
                sprintf(tiptext, "Next: %s", img_p->next_p->fullfilename);
                next_paging_btn_p->tooltip(tiptext);
                Fl_Tooltip::enter(next_paging_btn_p);
                return 0;
            } 
            else {
                prev_paging_btn_p->hide();
                next_paging_btn_p->hide();
                set_titles();
                Fl_Tooltip::enter(pic_box_p);
                return 0;
            }
#endif
        case FL_MOUSEWHEEL:
            dy = Fl::event_dy();
            img_p->handle_zoom(dy);
            redraw(); 
            return 1;
                
        case FL_SHOW:
            return 1;

        default:
            ret = Fl_Window::handle(e);
            break;

    }

    return(ret);
}

void Fl_Pic_Window::reset_image_view_for_new_image(void) {
    cancel_center_image_after_layout();
    if (!img_p) return;

    /*
     * Every newly selected image starts from a predictable view: the whole
     * image fitted into the current window/fullscreen area.  When the image
     * is changed while fullscreen is active, also reset the saved window zoom
     * so leaving fullscreen does not restore the previous image's zoom.
     */
    img_p->zoommode = WHOLE_IMG_ZOOM;
    img_p->zoompct = 1.0f;
    if (fullscreen_view) {
        fullscreen_image_changed = 1;
        saved_zoommode = WHOLE_IMG_ZOOM;
        saved_zoompct = 1.0f;
    }

    cancel_pending_single_click();
}

void Fl_Pic_Window::fit_window_to_current_image(void) {
    if (!img_p) return;

    cancel_pending_single_click();
    cancel_center_image_after_layout();
    reset_image_view_for_new_image();

    if (fullscreen_view) {
        /* Fullscreen has no ordinary window size to recompute. Keep the
         * fullscreen geometry and only refit the new image into the current
         * fullscreen view.
         */
        if (scroll_p) scroll_p->scroll_to(0, 0);
        img_p->resize(0, 0, w(), h());
        if (scroll_p) scroll_p->scroll_to(0, 0);
        center_image_in_view();
        schedule_center_image_after_layout();
        redraw();
        return;
    }

    /* Recompute the initial window size from the new image dimensions using
     * the same rules as image_set_item::load_image(). Do not reuse mutable
     * wnd_w/wnd_h here, because they are changed by manual resize and zoom
     * passes while the image is displayed.
     */
    int sx = 0, sy = 0, sw = 0, sh = 0;
    Fl::screen_xywh(sx, sy, sw, sh);
    if (sw <= 0) sw = img_p->scn_w;
    if (sh <= 0) sh = img_p->scn_h;

    int new_w = 0;
    int new_h = 0;
    int screen_w = img_p->scn_w;
    int screen_h = img_p->scn_h;
    if (screen_w <= 0) screen_w = sw;
    if (screen_h <= 0) screen_h = sh;

    float image_ratio = (img_p->img_w > 0) ? ((float)img_p->img_h / (float)img_p->img_w) : 1.0f;
    float screen_ratio = (screen_w > 0) ? ((float)screen_h / (float)screen_w) : 1.0f;

    if ((img_p->img_h < screen_h) && (img_p->img_w < screen_w)) {
        new_h = img_p->img_h;
        new_w = img_p->img_w;
        if (new_h < 90) new_h = 90;
        if (new_w < 120) new_w = 120;
    }
    else {
        if (image_ratio > screen_ratio) {
            new_h = screen_h;
            new_w = (int)((float)new_h / image_ratio);
        }
        else {
            new_w = screen_h;
            new_h = (int)((float)new_w * image_ratio);
        }
    }

    if (new_w < 1) new_w = w();
    if (new_h < 1) new_h = h();

    int new_x = sx + ((sw - new_w) / 2);
    int new_y = sy + ((sh - new_h) / 2);
    if (new_x < sx) new_x = sx;
    if (new_y < sy) new_y = sy;

    if (scroll_p) scroll_p->scroll_to(0, 0);
    resize(new_x, new_y, new_w, new_h);
    if (scroll_p) scroll_p->scroll_to(0, 0);
    center_image_in_view();
    schedule_center_image_after_layout();
    force_position(1);
    redraw();
}

void Fl_Pic_Window::single_click_timeout_cb(void *data) {
    Fl_Pic_Window *win = (Fl_Pic_Window *)data;
    if (win) win->single_click_timeout();
}

void Fl_Pic_Window::single_click_timeout(void) {
    if (!pending_left_click) return;

    pending_left_click = 0;
    advance_click_zoom();
    redraw();
    set_titles();
}

void Fl_Pic_Window::cancel_pending_single_click(void) {
    if (pending_left_click) {
        Fl::remove_timeout(single_click_timeout_cb, this);
    }
    pending_left_click = 0;
    pending_left_click_ms = 0;
}

void Fl_Pic_Window::scroll_viewport_for_child(int child_w, int child_h, int *view_w, int *view_h) {
    if (!scroll_p) {
        *view_w = w();
        *view_h = h();
        return;
    }

    /*
     * Use the scrollbars that FLTK has actually made visible, not a prediction
     * made before the scroll widget has recalculated its layout. Zoom actions
     * therefore do a second centering pass from a short timeout.
     */
    *view_w = scroll_p->visible_view_w();
    *view_h = scroll_p->visible_view_h();
}

void Fl_Pic_Window::center_image_after_layout_cb(void *data) {
    Fl_Pic_Window *wnd = (Fl_Pic_Window *)data;
    if (wnd) wnd->center_image_after_layout();
}

void Fl_Pic_Window::cancel_center_image_after_layout(void) {
    if (pending_center_after_layout) {
        Fl::remove_timeout(center_image_after_layout_cb, this);
        pending_center_after_layout = 0;
    }
}

void Fl_Pic_Window::schedule_center_image_after_layout(void) {
    cancel_center_image_after_layout();
    pending_center_after_layout = 1;
    Fl::add_timeout(0.01, center_image_after_layout_cb, this);
}

void Fl_Pic_Window::center_image_after_layout(void) {
    pending_center_after_layout = 0;

    /*
     * During an interactive resize FLTK can still have the old scrollbar
     * layout when image_set_item::resize() computes WHOLE_IMG_ZOOM. If the
     * previous zoom had scrollbars, the first fitted copy can therefore be
     * positioned/scaled against transient geometry. Recompute the whole-image
     * fit once more from the final scroll widget size after FLTK has processed
     * the layout, then reset the logical origin. This keeps the fitted image
     * centered in the actual window after manual grow/shrink operations.
     */
    if (img_p && img_p->zoommode == WHOLE_IMG_ZOOM && scroll_p) {
        scroll_p->scroll_to(0, 0);
        img_p->resize(0, 0, scroll_p->w(), scroll_p->h());
        scroll_p->scroll_to(0, 0);
    }

    center_image_in_view();
    if (pic_box_p) pic_box_p->redraw();
    if (scroll_p) scroll_p->redraw();
}

void Fl_Pic_Window::center_image_in_view(void) {
    if (!scroll_p || !pic_box_p) return;

    int base_w = scroll_p->w();
    int base_h = scroll_p->h();
    int img_w = pic_box_p->w();
    int img_h = pic_box_p->h();

    /*
     * If the current image fits in the outer scroll area, do not compensate for
     * stale scrollbar troughs from the previous zoom level. The child resize
     * itself will make FLTK hide the scrollbars; keeping the old compensation
     * is what left the fitted image shifted outside the frame.
     */
    if (img_w <= base_w && img_h <= base_h) {
        scroll_p->scroll_to(0, 0);
        return;
    }

    int view_w, view_h;
    scroll_viewport_for_child(img_w, img_h, &view_w, &view_h);

    /*
     * Fl_Scroll::scroll_to(x,y) selects the logical point shown at the top-left
     * of the viewport. For an oversized zoom, (image - viewport) / 2 clips the
     * same amount behind both left/right and top/bottom edges.
     */
    int sx = (img_w > view_w) ? ((img_w - view_w) / 2) : 0;
    int sy = (img_h > view_h) ? ((img_h - view_h) / 2) : 0;

    scroll_p->scroll_to(sx, sy);
}

void Fl_Pic_Window::advance_click_zoom(void) {
    if (!img_p) return;

    /*
     * Single-click zoom cycle:
     *   whole image -> 100% only if whole image was below 100% -> 200% -> 400% -> whole image
     * For small images where whole-image fit is already >= 100%, skip 100%
     * because it would only make the next click shrink the image.
     */
    if (img_p->zoommode == WHOLE_IMG_ZOOM) {
        if (img_p->zoompct < 0.995f) {
            img_p->zoommode = NATIVE_ZOOM;
            img_p->zoompct = 1.0f;
        }
        else {
            img_p->zoommode = SPEC_ZOOM;
            img_p->zoompct = 2.0f;
        }
    }
    else if (img_p->zoommode == NATIVE_ZOOM) {
        img_p->zoommode = SPEC_ZOOM;
        img_p->zoompct = 2.0f;
    }
    else if (img_p->zoommode == SPEC_ZOOM) {
        if (img_p->zoompct < 2.0f) {
            img_p->zoompct = 2.0f;
        }
        else if (img_p->zoompct < 4.0f) {
            img_p->zoompct = 4.0f;
        }
        else {
            img_p->zoommode = WHOLE_IMG_ZOOM;
            img_p->zoompct = 1.0f;
        }
    }
    else {
        img_p->zoommode = WHOLE_IMG_ZOOM;
        img_p->zoompct = 1.0f;
    }

    img_p->scale_image();
    center_image_in_view();
    schedule_center_image_after_layout();
}

void Fl_Pic_Window::toggle_fullscreen_view(void) {
    cancel_pending_single_click();
    cancel_center_image_after_layout();
    if (!img_p) return;

    if (!fullscreen_view) {
        saved_x = x();
        saved_y = y();
        saved_w = w();
        saved_h = h();
        saved_zoommode = img_p->zoommode;
        saved_zoompct = img_p->zoompct;
        fullscreen_image_changed = 0;

        fullscreen_view = 1;
        img_p->zoommode = WHOLE_IMG_ZOOM;
        fullscreen();
        img_p->resize(x(), y(), w(), h());
        center_image_in_view();
        schedule_center_image_after_layout();
        redraw();
    }
    else {
        fullscreen_view = 0;
        fullscreen_off(saved_x, saved_y, saved_w, saved_h);

        if (fullscreen_image_changed) {
            /* The image was changed while fullscreen was active. Do not restore
             * the old window size/zoom saved for the previous image; recompute
             * the ordinary window exactly as when that new image is opened.
             */
            fullscreen_image_changed = 0;
            fit_window_to_current_image();
            return;
        }

        img_p->zoommode = saved_zoommode;
        img_p->zoompct = saved_zoompct;
        img_p->resize(saved_x, saved_y, saved_w, saved_h);
        center_image_in_view();
        schedule_center_image_after_layout();
        redraw();
    }
}

void Fl_Pic_Window::specify_zoom(int zoom_mode, float zoom_pct) {
    img_p->zoommode = zoom_mode;
    if (img_p->zoommode == SPEC_ZOOM) {
        img_p->zoompct = zoom_pct;
    }
    img_p->scale_image();
    center_image_in_view();
    schedule_center_image_after_layout();
    redraw();
}

void Fl_Pic_Window::delete_image(void) {
    delete img_p;       img_p = NULL;
    delete pic_box_p;   pic_box_p = NULL;
    delete scroll_p;    scroll_p = NULL;
}

void report_invalid_file(char* filename) {
    printf(tr("Image '%s' not found or viewable.\n"), filename);
    fl_alert(tr("Image '%s' not found or viewable.\n"), filename);
}

void Fl_Pic_Window::setup(void) 
{
    int wnd_x, wnd_y;

    if (!img_p->load_image()) {
        report_invalid_file(HeadImgItem_p->fullfilename);
        return;
    }
    int sx = 0;
    int sy = 0;
    int sw = 0;
    int sh = 0;
    Fl::screen_xywh(sx, sy, sw, sh);
    if (sw <= 0) sw = img_p->scn_w;
    if (sh <= 0) sh = img_p->scn_h;


    wnd_x = sx + ((sw - img_p->wnd_w) / 2);
    wnd_y = sy + ((sh - img_p->wnd_h) / 2);
    if (wnd_x < sx) wnd_x = sx;
    if (wnd_y < sy) wnd_y = sy;

    w(img_p->wnd_w);
    h(img_p->wnd_h);
    /* This is the first top-level window.  The Fl_Window(w,h) constructor
       asks the WM to place it.  Use position() before show() and keep the
       FORCE_POSITION flag set so IceWM gets an explicit initial request. */
    position(wnd_x, wnd_y);
    force_position(1);
    if (!scroll_p) {
        Fl_Window::resize(wnd_x, wnd_y, img_p->wnd_w, img_p->wnd_h);
        scroll_p = new ImageScroll(0, 0, img_p->wnd_w, img_p->wnd_h);
        scroll_p->box(FL_NO_BOX);
        apply_image_area_color(scroll_p);
        scroll_p->begin();
        if (!pic_box_p) pic_box_p = new Fl_Box(0, 0, img_p->ful_w, img_p->ful_h);
        apply_image_area_color(pic_box_p);
        scroll_p->end();
        
#ifdef INCL_PAGING
        prev_paging_btn_p = new Fl_Button(10, 10, 64, 32,  tr("Prev"));
        prev_paging_btn_p->box(FL_RFLAT_BOX);
        prev_paging_btn_p->color(FL_WHITE);
        prev_paging_btn_p->labelsize(app_paging_font_size);
        prev_paging_btn_p->labelfont(app_ui_font());
        if (app_colors.have_button_background) prev_paging_btn_p->color(app_colors.button_background);
        if (app_colors.have_button_foreground) prev_paging_btn_p->labelcolor(app_colors.button_foreground);
        prev_paging_btn_p->callback(PagingCB, (void*)PAGING_PREV);
        prev_paging_btn_p->hide();
        prev_paging_btn_p->clear_visible_focus();
        
        
        next_paging_btn_p = new Fl_Button(10, 40, 64, 32, tr("Next"));
        next_paging_btn_p->box(FL_RFLAT_BOX);
        next_paging_btn_p->color(FL_WHITE);
        next_paging_btn_p->labelsize(app_paging_font_size);
        next_paging_btn_p->labelfont(app_ui_font());
        if (app_colors.have_button_background) next_paging_btn_p->color(app_colors.button_background);
        if (app_colors.have_button_foreground) next_paging_btn_p->labelcolor(app_colors.button_foreground);
        next_paging_btn_p->callback(PagingCB, (void*)PAGING_NEXT);
        next_paging_btn_p->hide();
        next_paging_btn_p->clear_visible_focus();
#endif      
        end();
        /* The scroll widget is the direct child that must follow top-level
         * window size changes. Making the image box itself resizable lets
         * FLTK resize the wrong nested child before our scale_image() pass,
         * which can leave the image/scroll geometry stale after interactive
         * window resizing.
         */
        resizable(scroll_p);
        apply_app_colors(this);
        apply_image_area_color(scroll_p);
        apply_image_area_color(pic_box_p);
    }
    else {
        Fl_Group::resize(wnd_x,wnd_y, img_p->wnd_w, img_p->wnd_h);
        Fl_Window::resize(wnd_x, wnd_y, img_p->wnd_w, img_p->wnd_h);
        scroll_p->resize(0, 0, img_p->wnd_w, img_p->wnd_h);
        apply_image_area_color(scroll_p);
        apply_image_area_color(pic_box_p);
    }
    img_p->scale_image();
    /* Last hidden-window placement request before show(). */
    resize(wnd_x, wnd_y, img_p->wnd_w, img_p->wnd_h);
    force_position(1);
    redraw();

}

#ifdef INCL_PAGING

int Fl_Pic_Window::image_index(void)
{
    int index = 0;
    image_set_item* set_img_p = NULL;
    if (img_p == HeadImgItem_p) return index + 1;
    set_img_p = HeadImgItem_p;
    while (img_p != set_img_p) {
        index++;
        set_img_p = set_img_p->next_p;
    }
    return index + 1;
}

static void PagingCB(Fl_Widget* window_p, void *data)
{
    long direction = (long)data;
    
    if ((direction == PAGING_NEXT || direction == PAGING_PREV) && Images <= 1) {
        return;
    }

    if (direction == PAGING_NEXT) {
        MainWnd_p->img_p = MainWnd_p->img_p->next_p;
    }
    else if (direction == PAGING_PREV) {
        MainWnd_p->img_p = MainWnd_p->img_p->prev_p;
    }
    TimeForNextSlide_t = time(NULL) + SlideInterval_sec;
    if (!MainWnd_p->img_p->im_orig_p) {
        MainWnd_p->img_p->load_image();
    }
    MainWnd_p->fit_window_to_current_image();
}
#endif

#ifdef INCL_MENU
static void MenuCB(Fl_Widget* window_p, void *userdata) 
{
    long choice = (long)userdata;
    int spec_w, spec_h;
    float speczoomfactor;
    image_set_item* new_img_p;
#ifdef INCL_PAGING
    char fullfilename[256] = {0};
    image_set_item* next_new_img_p = NULL;
#endif 

    Fl_Pic_Window* mainwnd_p = (Fl_Pic_Window *)window_p;
    
    switch (choice) {
        case MI_ABOUT:
            show_about_dialog(mainwnd_p);
            break;
        case MI_HELP:
            show_help_dialog(mainwnd_p);
            break;
        case MI_200_ZOOM: 
        case MI_400_ZOOM:
            mainwnd_p->specify_zoom(SPEC_ZOOM, ZoomFactor[choice]);
            break;
        case MI_WHOLE_ZOOM:
            mainwnd_p->specify_zoom(WHOLE_IMG_ZOOM, 0);
            break;
        case MI_FIT_ZOOM:
            mainwnd_p->specify_zoom(FIT_ZOOM, 0);
            break;
        case MI_100_ZOOM:
            mainwnd_p->specify_zoom(NATIVE_ZOOM, 0);
            break;
        case MI_OPEN:
            select_image_file();
        
            if (strlen(Filename) > 0) {
                if (file_image_type(Filename)) {
//                    printf("Loading image %s\n", Filename);
                    new_img_p = new image_set_item(mainwnd_p, Filename);
#ifdef INCL_PAGING
                    HeadImgItem_p->prev_p->link_after(new_img_p);
                    HeadImgItem_p->prev_p = new_img_p;
                    Images++;
                    int c, i;
                    i = 2;
                    c = FCD_p->count();
                    while (i <= c) {
                        if (file_image_type(FCD_p->value(i)) > 0) {
                            strncpy(fullfilename, FCD_p->value(i), 255);
//                            printf(tr("Loading image %s\n"), fullfilename);
                            next_new_img_p = new image_set_item(MainWnd_p, fullfilename);
                            if (HeadImgItem_p->prev_p) {
                                HeadImgItem_p->prev_p->link_after(next_new_img_p);
                                HeadImgItem_p->prev_p = next_new_img_p;
                            }
                            Images++;
                        }
                        i++;
                    }
                    mainwnd_p->img_p = new_img_p;
                    PagingCB((Fl_Widget*)NULL, (void *)PAGING_NEW);
#else
                    delete mainwnd_p->img_p;
                    mainwnd_p->img_p = new_img_p;
                    if (!MainWnd_p->img_p->im_orig_p) {
                        MainWnd_p->img_p->load_image();
                    }
                    MainWnd_p->fit_window_to_current_image();
#endif
                }
                else {
                    report_invalid_file(Filename);
                }
            }
            break;
#ifdef INCL_PAGING
        case MI_PREV:
            PagingCB((Fl_Widget*)NULL, (void *)PAGING_PREV);
            break;
        case MI_NEXT:
            PagingCB((Fl_Widget*)NULL, (void *)PAGING_NEXT);
            break;
        case MI_SLIDESHOW:
            if (Images > 1) {
                Slideshow = !Slideshow;
                if (Slideshow) TimeForNextSlide_t = time(NULL) + SlideInterval_sec;
                else TimeForNextSlide_t = -1;
            }
            break;
#endif
        default:
            break;
    }
    mainwnd_p->set_titles();

}
#endif

int main(int argc, char** argv) 
{
    int a = 1;
    char fullfilename[256] = {0};
#ifdef INCL_PAGING
    image_set_item* prev_img_item_p = NULL;
    image_set_item* img_item_p = NULL;
    TimeForNextSlide_t = time(NULL) + SlideInterval_sec;
#endif 

    fl_register_images();
    init_app_style();

    int args_ret = 0;
    int i;

    if (argc > 1) {
        MainWnd_p = new Fl_Pic_Window();
        char* name = argv[a];
        if (!strncmp(name, "file://", 5)) name += 7;
#ifdef INCL_PAGING
        DIR *dir = NULL;
        struct dirent *dp;          /* returned from readdir() */
        a = 1;
        while (a < argc) {
            DIR *dir = opendir (name);    
            if (dir == NULL) {
                // try to open it as a file
                prev_img_item_p = img_item_p;
//                printf("Loading image %s\n", argv[a]); 
                img_item_p = new image_set_item(MainWnd_p, name);
                if (!HeadImgItem_p) HeadImgItem_p = img_item_p;
                if (prev_img_item_p) {
                    prev_img_item_p->link_after(img_item_p);
                }
                Images++;
                a++;
                name = argv[a];
            }
            else {
                    while ((dp = readdir (dir)) != NULL) {
                    strncpy(fullfilename, name, 255);
                    if (fullfilename[strlen(fullfilename) - 1] != '/') {
                        strcat(fullfilename, "/");
                    }
                    strcat(fullfilename, dp->d_name);
                    if (file_image_type(fullfilename) > 0) {
                        prev_img_item_p = img_item_p;
                        printf(tr("Loading image %s\n"), fullfilename); fflush(0);
                        img_item_p = new image_set_item(MainWnd_p, fullfilename);
                        if (!HeadImgItem_p) HeadImgItem_p = img_item_p;
                        if (prev_img_item_p) {
                            prev_img_item_p->link_after(img_item_p);
                        }
                        Images++;
                    }
                    else {
                        printf(tr("Image '%s' has no recognized type.\n"), fullfilename); fflush(0);
                    }
                }
                a++;
                name = argv[a];
            }
        }
#else
 // NO_PAGING
        HeadImgItem_p = new image_set_item(MainWnd_p, name);
#endif
    }
    else {
        select_image_file();
        MainWnd_p = new Fl_Pic_Window();
        HeadImgItem_p = new image_set_item(MainWnd_p, Filename);
        Images = 1;
#ifdef INCL_PAGING
        a = FCD_p->count();
        img_item_p = HeadImgItem_p;
        while (a > 1) {
            if (file_image_type(FCD_p->value(Images + 1)) > 0) {
                strncpy(fullfilename, FCD_p->value(Images + 1), 255);
                prev_img_item_p = img_item_p;
                printf(tr("Loading image %s\n"), fullfilename);
                img_item_p = new image_set_item(MainWnd_p, fullfilename);
                if (prev_img_item_p) {
                    prev_img_item_p->link_after(img_item_p);
                }
                Images++;
            }
            a--;
        }
#endif
    }
    
    MainWnd_p->img_p = HeadImgItem_p;
    if (!strlen(MainWnd_p->img_p->fullfilename)) {
        printf("%s\n", tr("No image file given."));
        return 0;
    }
    
    MainWnd_p->setup();
    if (HeadImgItem_p->im_orig_p) {
        Running = 1;
    }

    MainWnd_p->show();
    int t = time(NULL);
    while(Running && (0 <= Fl::wait(1.0))) {
#ifdef INCL_PAGING
        t = time(NULL);
        if (Slideshow) {
            t = time(NULL);
            if ((unsigned int)TimeForNextSlide_t <= (unsigned int)t) {
                TimeForNextSlide_t = t + SlideInterval_sec;
                PagingCB((Fl_Widget*)MainWnd_p, (void*)PAGING_NEXT);
            }
             
        }
#endif
        if (!MainWnd_p->visible()) {
            Running = 0;
        }
    };
    return 0;
} 
