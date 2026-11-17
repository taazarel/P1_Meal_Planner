#include "dishes.h"
/* Vi skal have enum for at nummere vores ingr */
/* Kategori: holdbarhed */
enum Kategori {VEGETABLE, PLANT_BASED,DAIRY_PRODUCT,SNACKS,MEAT,EGG_PRODUCT, BREAD};
enum Holdbarhed {DAG_1, DAGE_2, DAGE_3, DAGE_5, DAGE_7, DAGE_14, DAGE_30};

struct Ingredient liste[24] = {
    {"potato", VEGETABLE, DAGE_14},
    {"onion", VEGETABLE, DAGE_5},
    {"oatmilk", PLANT_BASED, DAGE_7 },
    {"plantoil", PLANT_BASED, DAGE_14},
    {"cheese", DAIRY_PRODUCT, DAGE_14},
    {"cream", DAIRY_PRODUCT, DAGE_7},
    {"chips", SNACKS, DAGE_14},
    {"carrot", VEGETABLE, DAGE_7},
    {"broth", PLANT_BASED, DAGE_14},
    {"chicken", MEAT, DAGE_3},
    {"garlic", VEGETABLE, DAGE_7},
    {"eggs", EGG_PRODUCT, DAGE_7},
    {"bacon", MEAT, DAGE_7},
    {"spinath", VEGETABLE, DAGE_5},
    {"spaghetti", PASTA, DAGE_30},
    {"onions", VEGETABLE, DAGE_7},
    {"flour", BREAD, DAGE_30},
    {"butter", DAIRY_PRODUCT, DAGE_14},
    {"milk", DAIRY_PRODUCT, DAGE_14},
    {"pork", MEAT, DAGE_14},
    {"tomato", VEGETABLE, DAGE_7},
    {"rice", PASTA, DAGE_30},
    {"bread", BREAD, DAGE_14},
    {"beef", MEAT, DAGE_7}
};