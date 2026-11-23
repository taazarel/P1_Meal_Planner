#include "dish_struct.h"
#include <stdio.h>

int main(void) {

  cooking_flags_t cream_potatoes_flag = {
      .lactose_intolerant = 0,
      .vegan = 0,
      .muslim = 1,
      .hindu = 1,
      .vegetarian = 1,
  };

  dish_t cream_potatoes = {
      .name = "Cream Potatoes",
      .servings = 4,
      .cooking_time_minutes = 85,
      .flags = &cream_potatoes_flag,
  };

  printf("Cooking time of %s: %d minutes!", cream_potatoes.name,
         cream_potatoes.cooking_time_minutes);

  return 0;
}
