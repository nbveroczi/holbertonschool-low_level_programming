#include "print_char.h"
/* Print Alphabet
This is a function that prints the alphabet, in lowercase"
stop recursion when you get to end of alphabet <= 'z'
*/

void print_alphabet(void)
{

  char aChar;
  aChar = 'a';
  
  while ((aChar >= 'a') && (aChar <= 'z')) 
  {
    print_char(aChar);
    aChar++;
  }

}
