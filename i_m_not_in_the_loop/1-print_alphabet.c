#include "my_functions.h"
/* This is a file with a print function */

/* This is a function that prints the alphabet in lower case from a to z */ 
void print_alphabet(void)
{
  char aChar;
  /* The for loop iterates from 'a' to 'z' in increments of 1 */
  for (aChar = 'a'; aChar < = 'z'; aChar ++) 
  {
    /* This calculates and prints the character */
    print_char(aChar);
  }
}
