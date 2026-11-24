#include <stdio.h>
#include <string.h>
#include "include/Ingredients_struct.h"

void store_ingredient(Ingredient_t storage[], int *count, int max, Ingredient_t item) {
    if (storage == NULL || count == NULL || *count < 0 || *count >= max) {
        return;
    }

    for (int i = 0; i < *count; i++) {
        if (strcmp(storage[i].name, item.name) == 0 &&
            storage[i].category == item.category &&
            storage[i].unit_of_measurement == item.unit_of_measurement) {
            return;
        }
    }

    storage[*count] = item;
    (*count)++;
}
