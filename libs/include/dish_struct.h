#ifndef DISH_H_
#define DISH_H_
#include "Ingredients_struct.h"

typedef struct cooking_flags {
  int vegan;
  int vegetarian;
  int religion;
  int lactose_intolerant;
  int gluten_intolerant;
  int kosher;
  int pescetarian;

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
