#include "my_functions.h"
/*This file starts with the function prototype which tells the return type of the data that the function will return, and that their is zero (void) number of arguments passed to the function and the data order and increment in which  */ 

void print_alphabet(void)
{
  char aChar;

  for (aChar = 'a'; aChar < = 'z'; aChar ++) 
  {
    print_char(aChar);
  }
}
