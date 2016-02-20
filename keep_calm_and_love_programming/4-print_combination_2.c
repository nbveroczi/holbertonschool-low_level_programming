#include "my_functions.h"
/* This is a function that prints - on one line
   all possible combinations of two different 
   digits
*/
void print_combination_2(void)
{
  int tens, ones;

  for (tens = 0; tens < 10; tens++)
  {
      for (ones = tens; ones < 10; ones++)
      {
	if (tens != ones)
	{
	  printf("%d%d", tens, ones);

	  if ((tens != 8) || (ones != 9))
	    {
	      printf(", ");
	    }
	}
      }
  }
}
