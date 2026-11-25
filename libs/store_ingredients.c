#include <stdio.h>
#include <string.h>
#include "store_ingredients.h"

#define MAX_INGREDIENT_LENGTH 50

int store_ingredients(const char *filename) {
    
    char input[MAX_INGREDIENT_LENGTH];
    int amount = 0;

    FILE *file = fopen(filename, "w");
    if (file == NULL) {
        printf("Could not open file \n");
        return 0;
    }

    printf("What ingredients do you have? (To exit type 'q')\n");


    while (scanf("%49s", input) == 1 && strcmp(input, "q") != 0) {
        fprintf(file, "%s\n", input);
        amount++;
    }

    fclose(file);
    return amount;
}