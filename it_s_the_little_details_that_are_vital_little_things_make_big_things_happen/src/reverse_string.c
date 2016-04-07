#include "reverse_string.h"
#include "str_len.h"
/* This is a function that reverses a string. */

void reverse_string(char *s)
{
  int index;
  int length;
  char hold;
  length = str_len(s);
  
  for (index = 0; index < length/2; index++) 
    {
      hold  = *(s + index);
      *(s + index) = *(s + length - 1 - index);
      *(s + length - 1 - index) = hold;
    }
}
