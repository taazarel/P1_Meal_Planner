#ifndef LOAD_INGREDIENTS_H_
#define LOAD_INGREDIENTS_H_

#include "Ingredients_struct.h"

/*

eksempel på brug
load_ingredients("ingredients.txt", list, 30)

*/

int load_ingredients(const char *filename, Ingredient_t list[], int max);

#endif