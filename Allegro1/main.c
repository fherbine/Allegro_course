#include <allegro.h>

int main(int argc, char **argv)
{
    allegro_init(); // initialisation of Allegro lib
    allegro_message("Hello world !"); // Display hello world in a popup with allegro
    return 0;
}
END_OF_MAIN(); // Needed to compile allegro lib
