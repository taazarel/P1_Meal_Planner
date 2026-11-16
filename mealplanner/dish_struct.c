#include "dish_struct.h"

//Mangler header fil for ingredient typen/struct
typedef struct {
    int vegan;
    int vegetarian;
    int muslim;
    int hindu;
    int lactose_intolerant;

} cooking_flags_t;

typedef struct { 
    char* name;
    char* file_path; 
    int servings;
    int cooking_time_minutes;
    
    //struct Ingredient ingredients[] 
    cooking_flags_t *flags;

} dish_t;

