#include <stdio.h>

void print_to_98(int n)
{
  for (n = n; n < 98; n++)
    {
      if (n == 98)
	{
	  printf("%d %s\n",n, " ");
	}
      else
	{
	  printf("%d %s",n,", ");
        }
    }

  for (n = n; n > 97; n--)
    {
      if (n == 98)
	{
	  printf("%d %s\n",n, " ");
	}
      else 
	{
          printf("%d %s",n,", ");
	}
    }
}

