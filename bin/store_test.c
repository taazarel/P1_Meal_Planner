#include <stdio.h>
#include "../libs/include/Ingredients_struct.h"

// Funktionens signatur fra libs/store_ingredient.c
void store_ingredient(Ingredient_t storage[], int *count, int max, Ingredient_t item);

int main(void) {
    Ingredient_t lager[5]; // Plads til maks 5 ingredienser
    int antal = 0;

    // 1. Gem en ny ingrediens
    Ingredient_t tomat = {"tomato", VEGETABLE, PIECES, DAYS_7};
    store_ingredient(lager, &antal, 5, tomat);

    // 2. Prøv at gemme præcis den samme igen (bør IKKE blive en dublet)
    store_ingredient(lager, &antal, 5, tomat);

    // 3. Gem en anden ingrediens
    Ingredient_t ost = {"cheese", DAIRY_PRODUCT, PIECES, DAYS_14};
    store_ingredient(lager, &antal, 5, ost);

    // Udskriv hvad der ligger i lageret
    printf("Antal gemte ingredienser: %d (forventet: 2)\n", antal);
    for (int i = 0; i < antal; i++) {
        printf("  [%d] %s | kategori: %d | enhed: %d | holdbarhed: %d dage\n",
               i, lager[i].name, lager[i].category, lager[i].unit_of_measurement, lager[i].expiry);
    }

    return 0;
}
