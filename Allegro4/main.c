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

void    circle_move(void)
{
    BITMAP *buffer;
    double circle_pos_x = 0;

    buffer = create_bitmap(SCREEN_W, SCREEN_H);

    while (!key[KEY_ENTER]);

    while(!key[KEY_ESC])
    {
        clear_bitmap(buffer);
        circlefill(buffer, (int)circle_pos_x, SCREEN_H/2, 50, makecol(255, 255, 255));
        circle_pos_x += 0.1;
        if (circle_pos_x - 50 >= SCREEN_W)
            break;
        blit(buffer, screen, 0, 0, 0, 0, SCREEN_W, SCREEN_H);
    }
}

void    hello_world(char **input_text)
{
    BITMAP *buffer;

    buffer = create_bitmap(SCREEN_W, SCREEN_H);

    while (!key[KEY_ESC])
    {
        clear_bitmap(buffer);
        textout(buffer, font, input_text, 0, 0, makecol(133, 133, 133));
        blit(buffer, screen, 0, 0, 0, 0, SCREEN_W, SCREEN_H);
    }
}

void    hw2(void)
{
    BITMAP *buffer;

    buffer = create_bitmap(SCREEN_W, SCREEN_H);
    while(!key[KEY_ESC])
    {
        clear_bitmap(buffer);
        text_mode(makecol( 255, 255, 255)) ;
        textprintf(buffer, font, 50, 50, makecol(12, 120, 250), "Screen size: width -> %d, Height -> %d",
                    SCREEN_W, SCREEN_H);
        blit(buffer, screen, 0, 0, 0, 0, SCREEN_W, SCREEN_H);
    }
}

int main(int argc, char **argv)
{
    if (main_init() == -1)
        exit(EXIT_FAILURE);
    /// circle_move();
    /// hello_world("hello world");
    /// hw2();
    return 0;
}
END_OF_MAIN();
