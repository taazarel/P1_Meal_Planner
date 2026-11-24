#include "../libs/include/config.h"
#include <stdio.h>

int exists(const char *fname) {
  FILE *file;
  if ((file = fopen(fname, "r"))) {
    fclose(file);
    return 1;
  }
  return 0;
}

int main() {
  config_t result;

  if (!exists("Config.conf")) {
    make_config();
  }
  result = read_config();
  for (int i = 0; i < 8; i++) {
    printf("%d\n", result.flags[i]);
  }
  printf("%d", result.allergies[0]);

  return 0;
}
