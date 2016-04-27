#include "print_char.h"
/* Swap Integers
This is a function that swaps the values of two integers
return integers swapped
*/

void swap_int(int *a, int *b)
{

  int temp;

  temp = *a;
  *a = *b;
  *b = temp;

}
