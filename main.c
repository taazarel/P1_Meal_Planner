#include <stdio.h>
#include "dishfinder.h"

int main(int argc, char *argv[])
{
    if (argc < 2) {
        printf("Must have 1 or more");
        return 1;
    }
    find_dishes(argc, argv);

    return 0;
}
