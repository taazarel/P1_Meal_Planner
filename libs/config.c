#include <stdio.h>
#include "include/Ingredients_struct.h"
#include "include/config.h"

int make_config (void) {
    FILE* config;
     config = fopen("Config.conf", "w" );
    if (config == NULL) {
        return 0;
    }
    

printf("Are you, vegatarian, vegan, muslim, hindu, lactose intolerant, gluten intolerant, kosher or pescetarian?\n");
printf("Please answer 1 for yes or 0 for nok, and seperate the answers with a comma\n");

int arr[8];

for(int i = 0; i < 8; i++) {
    fprintf(config, "%d\n", arr[i]);
    scanf("%d", arr[i]);
}

printf("Please enter if you have any allergies related tot he following catagoryes: vegatables, pasta, plant_based products, snakcs, meat, egg_product, bread\n");

enum category allergies[8];
int index = 0;
int scanres = 0;

scanres = scanf("%d", allergies[index]);
while(scanres > 0) {
    fprint(config, "%d\n", allergies[index]);
    index++;
    scanres = scanf("%d", allergies[index]);
}
return 1;
}


config_t read_config (void) {
    config_t result;
    FILE* config;
    config = fopen("Config.conf", "r");
    for (int i = 0; i < 8; i++) {
        fscanf(config,"%d",result.flags[i]);
    }
    int index = 0;
    int scanres = 0;
    scanres = fscanf (config, "%d", result.allergies[index]);
    while(scanres > 0) {
        index++;
    scanres = fscanf (config, "%d", result.allergies[index]); 
    }
    return result;

}