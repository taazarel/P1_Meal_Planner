#include <stdio.h>
#include <string.h>
#include "dishfinder.h"
#include "dishes.h"

void find_dishes(int argc, char *argv[]) {
    int found_any = 0;

    printf("You can make: \n");
    for (int d = 0; d < Dish_Total; d++) {

        int missing = 0;
        for (int i = 0; i < dishes[d].ingredient_count; i++) {

            int have_it = 0;
            for (int h = 1; h < argc; h++) {
                if (strcmp(dishes[d].ingredients[i], argv[h]) == 0) {
                    have_it = 1;
                }
            }
            if (have_it == 0) {
                missing++;
            }
        }
        if (missing == 0) {
            printf("%s", dishes[d].name);
            found_any = 1;
        }
    }
    if (found_any == 0) {
        printf("nothing");
    }
}
