#ifndef CONFIG_H_
#define CONFIG_H_
#include "Ingredients_struct.h"

typedef struct config {
    int flags[8];
    enum category allergies [MAX_CATEGORIES];

}config_t;

int make_config (void);
config_t read_config (void);

#endif