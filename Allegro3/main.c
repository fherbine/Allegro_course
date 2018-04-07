#include <allegro.h>

int main(int argc, char *argv[])
{
    // Initialisation of Allegro
    allegro_init();

    // Mouse & keyboard installation for future use
    install_mouse();
    install_keyboard();

    set_color_depth(desktop_color_depth());
    if (set_gfx_mode(GFX_AUTODETECT_WINDOWED, 800, 600, 0, 0) != 0)
    {
        allegro_message("An Error occured with window initialisation ... ");
        allegro_exit();
        exit(EXIT_FAILURE);
    }

    show_mouse(screen);

    while (1)
    {
        textprintf_ex(screen, font, 20, 20, makecol(0, 255, 0), makecol(0, 0, 0), "%d %d", mouse_x, mouse_y);
        if (mouse_b & 1)
            rectfill(screen, mouse_x, mouse_y, mouse_x + 10, mouse_y + 10, makecol(135, 135, 135));
        if (mouse_b & 2)
            circlefill(screen, mouse_x, mouse_y, 50, makecol(0, 0, 0));
        if (mouse_b & 4)
            break;
    }
    return 0;
}
END_OF_MAIN();
