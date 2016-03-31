#include "4-is_palindrome.h"
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

/* This is a function that returns 1 if a string is a palindrome and 0 if not using 
   two parameters. */

int is_palindrome_recursive(char *s, int leftIndex)
{
  int result, rightIndex;
  result = 0;
  rightIndex = str_len(s) - (leftIndex + 1);

  if (s[leftIndex] == s[rightIndex])
    {
      if ((leftIndex + 1 == rightIndex) ||
	  (leftIndex == rightIndex))
	{
	  result = 1;
	}
      else
	{
	  result = is_palindrome_recursive(s, leftIndex + 1);
        }
    }
  return result;
}

/* This is a function that returns 1 if a string is a palindrome and 0 if not
   using one parameter. */

int is_palindrome(char *s)
{
  return is_palindrome_recursive(s, 0);
}
