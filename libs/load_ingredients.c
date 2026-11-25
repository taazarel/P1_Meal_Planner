#include <stdio.h>
#include "load_ingredients.h"

int load_ingredients(const char *filename, Ingredient_t list[], int max) {
    FILE *file = fopen(filename, "r");
    if (file == NULL) {
        printf("Could not open file \n");
        return 0;
    }


    int amount = 0;

    while (amount < max && fscanf(file, "%49s", list[amount].name) == 1) {
        amount++;
    }


    fclose(file);
    return amount;

}