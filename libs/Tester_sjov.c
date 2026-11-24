#include <stdio.h>
#include <string.h>

#define MAX 30
#define LENGHT 30

int main(void) {
    char ingredients[MAX][LENGHT];
    int antal = 0;

    FILE *fil = fopen("ingredienser.txt", "r");
    if (file == NULL) {
        printf("Could not open file \n");
        return 1;
    }

    while (amount < MAX && fgets(ingredints[amount], LENGHT, fil) != NULL) {
        ingredients[amount][strcspn(ingredients[amount], "\n")] = '\0';
        amount++;
    }
    fclose(file);

    printf("Load %d ingredients:\n", amount);
    for (int i = 0; i < amount; i++) {
        printf("%d: %s\n", i + 1, ingredients[i]);
    }
    return 0;
}