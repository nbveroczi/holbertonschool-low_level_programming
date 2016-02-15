#include "my_functions.h"

/* This function prints on one line, all combos of single-digit numbers */
void print_combination_1(void)
{
  int n;

  for (n = 0; n < 10; n++) 
    {  
      print_number(n);

      if (n < 9) 
	{
	  print_char(',');
	  print_char(' ');
	}
    }
}
