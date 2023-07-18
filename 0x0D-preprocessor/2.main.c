#include <stdio.h>

int main() {
  // Get the name of the file.
  char *c = __FILE__;

  // Print the name of the file.
  printf("%s\n", c);

  return 0;
}
