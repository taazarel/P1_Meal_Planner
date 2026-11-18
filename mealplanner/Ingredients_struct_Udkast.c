#include "Ingredients_struct.h"

struct Ingredient liste[] = {{"potato", VEGETABLE, PIECES, DAYS_14},
                             {"onion", VEGETABLE, PIECES, DAYS_7},
                             {"oatmilk", PLANT_BASED, MILLILITERS, DAYS_7},
                             {"plantoil", PLANT_BASED, TABLESPOON, DAYS_14},
                             {"cheese", DAIRY_PRODUCT, PIECES, DAYS_14},
                             {"cream", DAIRY_PRODUCT, MILLILITERS, DAYS_7},
                             {"chips", SNACKS, GRAM, DAYS_14},
                             {"carrot", VEGETABLE, GRAM, DAYS_7},
                             {"broth", PLANT_BASED, PIECES, DAYS_14},
                             {"chicken", MEAT, GRAM, DAYS_3},
                             {"garlic", VEGETABLE, PIECES, DAYS_7},
                             {"eggs", EGG_PRODUCT, PIECES, DAYS_7},
                             {"bacon", MEAT, GRAM, DAYS_7},
                             {"spinach", VEGETABLE, GRAM, DAYS_5},
                             {"spaghetti", PASTA, GRAM, DAYS_30},
                             {"flour", BREAD, GRAM, DAYS_30},
                             {"butter", DAIRY_PRODUCT, GRAM, DAYS_14},
                             {"milk", DAIRY_PRODUCT, MILLILITERS, DAYS_14},
                             {"pork", MEAT, GRAM, DAYS_14},
                             {"tomato", VEGETABLE, PIECES, DAYS_7},
                             {"rice", PASTA, GRAM, DAYS_30},
                             {"bread", BREAD, GRAM, DAYS_14},
                             {"beef", MEAT, GRAM, DAYS_7}};

const int antal = sizeof(liste) / sizeof(liste[0]);
