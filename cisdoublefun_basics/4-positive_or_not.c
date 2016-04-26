#include "print_char.h"
/* Positive or Not
This is a function that takes an integer as an argument and prints P
if the number is positive, N if the number is negative, and Z if 
the number is zero
The return is either P, N or Z
*/

void positive_or_not(int n)
{

  if (n == 0)
  {
    print_char('Z');
  }

  if (n > 0)
  {
    print_char('P');
  }

  if (n < 0)
  {
    print_char('N');
  }

}
