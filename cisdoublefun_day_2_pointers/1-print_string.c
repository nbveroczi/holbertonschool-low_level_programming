#include "print_char.h"
/* Print String
This is a function that prints a string
*/

void print_string(char *str)
{

  int i;

  while (str[i] != '\0')
  {
    print_char(str[i]);
    i++;
  }

}
