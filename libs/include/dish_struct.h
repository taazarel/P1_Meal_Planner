#ifndef DISH_H_
#define DISH_H_
#include "Ingredients_struct.h"

typedef struct cooking_flags {
  bool vegan;
  bool vegetarian;
  bool muslim;
  bool hindu;
  bool lactose_intolerant;
  bool gluten_intolerant;
  bool kosher;
  bool pescetarian;

} cooking_flags_t;

typedef struct dish {
  char *name;
  char *file_path;
  int servings;
  int cooking_time_minutes;

  cooking_flags_t *flags;
  Ingredient_t ingredients[];

} dish_t;

#endif
