#include "print_char.h"
/* Reverse Alphabet
This is a function that prints the alphabet in lower case and in reverse order
stop recurrsion when the letter a is printed
*/
void print_tebahpla(void)
{
  char aChar;
  aChar = 'z';

  while ((aChar <= 'z') && (aChar >= 'a')) 
  {	 
    print_char(aChar);
    aChar--;  
  }

}
