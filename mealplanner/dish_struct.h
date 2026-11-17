#ifndef DISH_H_
#define DISH_H_

typedef struct cooking_flags {
  int vegan;
  int vegetarian;
  int muslim;
  int hindu;
  int lactose_intolerant;

} cooking_flags_t;

typedef struct dish {
  char *name;
  char *file_path;
  int servings;
  int cooking_time_minutes;

  // struct Ingredient ingredients[]
  cooking_flags_t *flags;

} dish_t;

#endif
