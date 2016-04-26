#include "print_char.h"
/* Print Base 16
This is a function that prints all the numbers of base 16 from 0 to F
return base 16
*/

void print_base16(void)
{
  int i;
  i = '0';

  while ((i >= '0') && (i <= '9'))
  {
    print_char(i);
    i++;
  }

  i = 'A';

  while ((i >= 'A') && (i <= 'F'))
  {
    print_char(i);
    i++;
  }

}
