#ifndef DISHES_H
#define DISHES_H

#define Dish_Total 15
#define Max_Ingredients 5

/*en structure der danner skabelon for dish*/
typedef struct {
    char *name;
    char *ingredients[Max_Ingredients];
    int ingredient_count;
    /*char *requirement;*/
} Dish;

/*Fortæller andre filer at den eksisterer*/
extern Dish dishes[Dish_Total];

#endif
