#ifndef DISHES_H
#define DISHES_H

#define Dish_Total 10
#define Max_Ingredients 5


typedef struct {
    char *name;
    char *ingredients[Max_Ingredients];
    int ingredient_count;
    /*char *requirement;*/
} Dish;

extern Dish dishes[Dish_Total];

#endif
