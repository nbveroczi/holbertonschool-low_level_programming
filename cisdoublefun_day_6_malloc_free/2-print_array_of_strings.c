#include <stdlib.h>
#include <unistd.h>
/* This is a function that prints the content of an array of strings. */
int print_char(char c)
{
  return (write(1, &c, 1));
}

void print_array_of_strings(char **a)
{
  int i;
  int j;
  i = 0;

  while (a[i] != NULL)
  {
    j = 0;
    while (a[i][j] != '\0')
    {
      print_char(a[i][j]);
      j++;
    }
    if (a[i + 1] != NULL)
    {
      print_char(' ');
    }
    i++;
  }
  print_char('\n');
}
