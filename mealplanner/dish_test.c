#include "dish_struct.h"
#include <stdio.h>

int main (void) {

    cooking_flags_t cream_potatoes_flag = {
    .lactose_intolerant = 0,
    .vegan = 0,
    .muslim = 1,
    .hindu = 1,
    .vegetarian = 1,
    };

    dish_t cream_potatoes = {
    .name = "Cream Potatoes",
    .servings = 4,
    .cooking_time = 85,
    .flags = &cream_potatoes_flag,
    };

    return 0;
}