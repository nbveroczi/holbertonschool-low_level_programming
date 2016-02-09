#include "my_functions.h"
/* This is a file with a print function */

/* This function prints the alphabet in lower case and in reverse order */
void print_tebahpla(void)

{
  char aChar;
  /* The for loop iterates from 'z' to 'a' in increments of 1 */
  for (aChar = 'z'; aChar >= 'a'; aChar--)
  {  
    /* This calculates and prints the character */
    print_char(aChar);
  }
}
