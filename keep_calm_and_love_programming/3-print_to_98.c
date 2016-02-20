#include <stdio.h>
/* This function takes an integer as argument, and prints -
   one one line - all numbers from it's value to 98, followed
   by a new line 
*/
void print_to_98(int n)
{ 
  int delta, i;
  
  if (n < 98)
    {
      delta = 1;
    }
  else if (n > 98)
    {
      delta = -1;
    }
  else 
    {
      delta = 0;
    }
  
  for (i = n; i != 98; i += delta)
    {
      printf("%d, ", i);
    }
  printf("%d\n", i);
}    



