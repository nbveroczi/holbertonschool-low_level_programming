#include "reverse_array.h"
#include "print_char.h"
/* this is a function that reverses the content of an array of integers */

void reverse_array(int *a, int n)
{
  int index;
  int hold;

  for (index = 0; index < n / 2; index++)
    {
      hold = a[index];
      a[index] = a[n - index - 1];
      a[n - index - 1] = hold;
    }
}
