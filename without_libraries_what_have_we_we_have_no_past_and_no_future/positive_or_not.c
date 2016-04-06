#include "positive_or_not.h"

/* This is a file with printing functions that utilizes if else statements */

/* This is a function that takes an integer as argument and prints P if the number
   is positive, N if the number is negative, and Z if the number is zero */
void positive_or_not(int n)
{

  if (n == 0)
    {
      print_char('Z');
    }
  else if (n < 0)
    {
      print_char('N');
    }
  else
    {
      print_char('P');
    }
}
