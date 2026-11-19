#ifndef MENU_H
#define MENU_H

#include "dishes.h"

#define Max_All_Ingredients (Dish_Total * Max_Ingredients)

/* Runs the ncurses menu (welcome page -> ingredient pages).
 * Fills `chosen` with pointers to the selected ingredient names and
 * returns how many were chosen. Returns -1 if the user quit. */
int run_menu();

#endif
