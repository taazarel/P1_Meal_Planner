#ifndef INGREDIENT_H_
#define INGREDIENT_H_
#define MAX_CATEGORIES 8

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

enum unit_of_measurement {
  TEASPOON,
  TABLESPOON,
  PIECES,
  GRAM,
  MILLILITERS,
};

/* Holdbarhed i dage */
enum expiry {
  DAYS_1 = 1,
  DAYS_2 = 2,
  DAYS_3 = 3,
  DAYS_5 = 5,
  DAYS_7 = 7,
  DAYS_14 = 14,
  DAYS_30 = 30
};

typedef struct Ingredient {
  char name[50];
  enum category category;
  enum unit_of_measurement unit_of_measurement;
  enum expiry expiry;
} Ingredient_t;


extern struct Ingredient liste[];


#endif