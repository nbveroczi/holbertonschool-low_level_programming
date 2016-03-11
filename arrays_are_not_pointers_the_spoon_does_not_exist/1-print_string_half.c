#include "1-print_string_half.h"
/* This is a function that returns the length of a string. */

int str_len(char *str)
{
  int len;
  len = 0;

  while (str[len] != '\0')
    {
      len++;
    }
  return len;
}

/*This is a function that modifies a string length contingent
  on it's status as odd or even lengths */

int mod_str_length(char *str)
{
  int modLength;
  modLength = str_len(str);

  if (modLength % 2 == 0) 
    {
      modLength = (modLength -1);
    }  
  return modLength;
}

/*This is a function that prints half of a string */

void print_string_half(char *str)
{
  int newLength;
  newLength = mod_str_length(str);
  int i;

  for (i = 0; str[i] != '\0'; i++)
    {
      if (i > newLength/2) 
	{
	  print_char(str[i]);
	}
    }
}
