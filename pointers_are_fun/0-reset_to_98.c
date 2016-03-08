#include "0-reset_to_98.h" 

/* This function takes a pointer to an int as a parameter 
   and updates the value it points to, to 98.
*/
void reset_to_98(int *n)
{
  if (n != 0) 
  {
    *n = 98;
  }
}

