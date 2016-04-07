#include "swap_int.h"
/* This function swaps the values of two integers.*/

void swap_int(int *a, int *b)
{
  if (*a && *b)
    {
      int s;
      s = *a;
      *a = *b;
      *b = s;
    }
}
