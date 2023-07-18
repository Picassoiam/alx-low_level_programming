#include <stdio.h>

int main() {
  /* Get the name of the file.*/
  char *cc = __FILE__;

  /* Print the name of the file.*/
  printf("%s\n", cc);

  return 0;
}
