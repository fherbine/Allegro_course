#include <allegro.h>

int     main_init(void)
{
    allegro_init(); // initialisation of Allegro API to use it

    // Installing keyboard & mouse
    if(install_keyboard() == -1)
    {
        allegro_message("An error occured during keyboard installation : %s", allegro_error);
        return (-1);
    }
    if(install_mouse() == -1)
    {
        allegro_message("An error occured during mouse installation : %s", allegro_error);
        return (-1);
    }
}

int main()
{

    return 0;
}
END_OF_MAIN();
