#include <allegro.h>

int main()
{
    // Initialisation of allegro
    allegro_init();

    // Needed to use keyboard
    install_keyboard();

    set_color_depth(desktop_color_depth());
    // open a graphical window
    if (set_gfx_mode(GFX_AUTODETECT_WINDOWED, 800, 600, 0, 0) != 0)
    {
        allegro_message("An error occured in graphical initialisation.");
        allegro_exit();
        exit(EXIT_FAILURE);
    }

    readkey();
    return 0;
}
END_OF_MAIN();
