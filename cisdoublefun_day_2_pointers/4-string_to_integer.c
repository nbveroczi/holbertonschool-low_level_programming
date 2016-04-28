#include <stdbool.h>
#include <limits.h>
/* First Number in String
This is a function that returns the first number contained in a string
*/

int string_to_integer(char *s)
{
 
  bool firstDigit;
  int i;
  int long n;
  i = 0;
  n = 0;
  firstDigit = false;

  while (s[i] != '\0')
  {
    if ((s[i] >= '0') && ( s[i] <= '9'))
    {
      n = n * 10;
      if (n > 0)
      {
        n += (*(s+i) - '0');
      }
      else 
      {
	n -= (*(s+i) - '0');
      }
      if ((n > INT_MAX) || (n < INT_MIN))
      {
	return(0);
      }
      if (firstDigit == false)
      {
	firstDigit = true;
	if ((i > 0) && (s[i-1] == '-'))
	{
	  n = n * -1;
	}
      }
      
    }
    else
    {
      if (firstDigit)
      {
        break;
      }
    }
    i++; 
  }

  return (n);
}
