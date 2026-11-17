#include "dishes.h"

/* Kategori */
enum category {
    VEGETABLE,
    PASTA,
    PLANT_BASED,
    DAIRY_PRODUCT,
    SNACKS,
    MEAT,
    EGG_PRODUCT,
    BREAD
};

/* Holdbarhed i dage */
enum holdbarhed {
    DAG_1   = 1,
    DAGE_2  = 2,
    DAGE_3  = 3,
    DAGE_5  = 5,
    DAGE_7  = 7,
    DAGE_14 = 14,
    DAGE_30 = 30
};

struct Ingredient {
    char navn[50];
    enum category category;
    enum holdbarhed holdbarhed;
};

struct Ingredient liste[24] = {
    {"potato",    VEGETABLE,     DAGE_14},
    {"onion",     VEGETABLE,     DAGE_5},
    {"oatmilk",   PLANT_BASED,   DAGE_7},
    {"plantoil",  PLANT_BASED,   DAGE_14},
    {"cheese",    DAIRY_PRODUCT, DAGE_14},
    {"cream",     DAIRY_PRODUCT, DAGE_7},
    {"chips",     SNACKS,        DAGE_14},
    {"carrot",    VEGETABLE,     DAGE_7},
    {"broth",     PLANT_BASED,   DAGE_14},
    {"chicken",   MEAT,          DAGE_3},
    {"garlic",    VEGETABLE,     DAGE_7},
    {"eggs",      EGG_PRODUCT,   DAGE_7},
    {"bacon",     MEAT,          DAGE_7},
    {"spinach",   VEGETABLE,     DAGE_5},
    {"spaghetti", PASTA,         DAGE_30},
    {"onions",    VEGETABLE,     DAGE_7},
    {"flour",     BREAD,         DAGE_30},
    {"butter",    DAIRY_PRODUCT, DAGE_14},
    {"milk",      DAIRY_PRODUCT, DAGE_14},
    {"pork",      MEAT,          DAGE_14},
    {"tomato",    VEGETABLE,     DAGE_7},
    {"rice",      PASTA,         DAGE_30},
    {"bread",     BREAD,         DAGE_14},
    {"beef",      MEAT,          DAGE_7}
};