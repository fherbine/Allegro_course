#include <allegro.h>
#include <stdlib.h>

int     main_init(void)
{
    allegro_init(); // initialisation of Allegro API to use it

    // Installing keyboard & mouse
    if(install_keyboard() == -1)
    {
        allegro_message("An error occured during keyboard installation : %s\n", allegro_error);
        return (-1);
    }
    if(install_mouse() == -1)
    {
        allegro_message("An error occured during mouse installation : %s\n", allegro_error);
        return (-1);
    }

    //setting graphical mode
    set_color_depth(desktop_color_depth());
    if (set_gfx_mode(GFX_AUTODETECT_WINDOWED, 800, 600, 0, 0) != 0)
    {
        set_gfx_mode(GFX_TEXT, 0, 0, 0, 0);
        allegro_message("Cannot set video mode : %s\n", allegro_error);
        return (-1);
    }
    return (1);
}

void    backgroundColor(int color)
{
    BITMAP *buffer;

    buffer = create_bitmap(SCREEN_W, SCREEN_H);
    clear_bitmap(buffer);
    rectfill(buffer, 0, 0, SCREEN_W, SCREEN_H, color);
}

int main()
{
    return 0;
}
END_OF_MAIN();
