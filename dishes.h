#ifndef DISHES_H
#define DISHES_H

#define Dish_Total 8
#define Max_Ingredients 5


typedef struct {
    char *name;
    char *ingredients[Max_Ingredients];
    int ingredient_count;
} Dish;

extern Dish dishes[Dish_Total];

#endif
