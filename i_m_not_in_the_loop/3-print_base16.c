#include "my_functions.h"
// This is a file with printing functions

// This is a function that prints all the numbers of base 16, from 0 to F
void print_base16(void)
{
// I am declaring a variable called x which is an integer type
  int x;
// The for loop iterates from 0 - 15 in increments of 1 
  for (x = 0; x <= 15; x++)
  {   
// The if statement handles characters 0-9 
    if (x <= 9)
    {
// Calculates the character to print by adding x to the base character
      print_char('0' + x);   
    }
// The else statement handles characters A-F
    else 
    {
// Calculate the charcter to print by adding the x to the base character 
// and then subtract the number of items processed to adjust the calculations 
// so that I can map it to the correct group of characters    
      print_char('A' + x - 10); 
    }	
  }
}
