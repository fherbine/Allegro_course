# Allegro_course

C programs using Allegro lib.

================ WHAT CAN YOU FIND HERE ================

- [/Allegro1](Allegro1) : Display a simple 'Hello world' PopUp.

- [/Allegro2](Allegro2) : How to display a graphic window.

=========== SUM UP OF ALLEGRO'S FUNCTIONS USED =========

1. Basics
   - **allegro_init** : Initialisation of Allegro
     > See [here](http://liballeg.org/stabledocs/en/alleg000.html#allegro_init) for more infos.

   - **END_OF_MAIN** : Mark the end of a program using Allegro
     > See [here](http://liballeg.org/stabledocs/en/alleg000.html#END_OF_MAIN) for more infos.

2. Basic functions
   - **allegro_message** : Display a message in a popUp
     > See [here](http://liballeg.org/stabledocs/en/alleg000.html#allegro_message) for more infos.

3. Allegro - basic graphical use
   - **desktop_color_depth** : get the desktop color depth.
     > See [here](http://liballeg.org/stabledocs/en/alleg000.html#desktop_color_depth) for more infos.

   - **set_color_depth** : Set the pixel format to use (8, 15, 16, 24, 32).
     > See [here](http://liballeg.org/stabledocs/en/alleg008.html#set_color_depth) for more infos.

   - **set_gfx_mode** : Switch into graphics mode.
     > See [here](http://liballeg.org/stabledocs/en/alleg008.html#set_gfx_mode) for more infos.

4. Allegro - UI
   - **readkey** : Read input key pressed from keyboard.
     > See [here](http://liballeg.org/stabledocs/en/alleg006.html#readkey) for more infos.

================== DEFINES FROM ALLEGRO =================

- **GFX_AUTODETECT_WINDOWED** : Used in `set_gfx_mod()`, to access to graphical driver, to create a new window.
  > See [here](http://liballeg.org/stabledocs/en/alleg037.html#GFX_*/Windows) for more infos
