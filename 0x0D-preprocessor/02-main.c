#include <stdio.h>

/* Get the name of the file.*/
int main (void)
{
char *cc = __FILE__;

/* Print the name of the file.*/
printf("%s\n", cc);

return 0;
}
