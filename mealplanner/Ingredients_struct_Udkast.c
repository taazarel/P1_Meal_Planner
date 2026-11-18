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

enum maale_enhed {
    SPOON,
    CUP,
    PIECES,
    KG,
    LITERS,
    GRAM
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
    enum maale_enhed maale_enhed;
    enum holdbarhed holdbarhed;
};

struct Ingredient liste[] = {
    {"potato",    VEGETABLE,     PIECES, DAGE_14},
    {"onion",     VEGETABLE,     PIECES, DAGE_7},
    {"oatmilk",   PLANT_BASED,   LITERS, DAGE_7},
    {"plantoil",  PLANT_BASED,   SPOON,  DAGE_14},
    {"cheese",    DAIRY_PRODUCT, PIECES, DAGE_14},
    {"cream",     DAIRY_PRODUCT, LITERS, DAGE_7},
    {"chips",     SNACKS,        GRAM,   DAGE_14},
    {"carrot",    VEGETABLE,     KG,     DAGE_7},
    {"broth",     PLANT_BASED,   PIECES, DAGE_14},
    {"chicken",   MEAT,          KG,     DAGE_3},
    {"garlic",    VEGETABLE,     PIECES, DAGE_7},
    {"eggs",      EGG_PRODUCT,   PIECES, DAGE_7},
    {"bacon",     MEAT,          GRAM,   DAGE_7},
    {"spinach",   VEGETABLE,     KG,     DAGE_5},
    {"spaghetti", PASTA,         KG,     DAGE_30},
    {"flour",     BREAD,         GRAM,   DAGE_30},
    {"butter",    DAIRY_PRODUCT, GRAM,   DAGE_14},
    {"milk",      DAIRY_PRODUCT, CUP,    DAGE_14},
    {"pork",      MEAT,          KG,     DAGE_14},
    {"tomato",    VEGETABLE,     PIECES, DAGE_7},
    {"rice",      PASTA,         GRAM,   DAGE_30},
    {"bread",     BREAD,         KG,     DAGE_14},
    {"beef",      MEAT,          KG,     DAGE_7}
};

const int antal = sizeof(liste) / sizeof(liste[0]);