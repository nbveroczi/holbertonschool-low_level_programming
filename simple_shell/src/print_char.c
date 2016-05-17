#include <unistd.h>
/* This is a function that prints a char */

int print_char(char c)
{
  return (write(1, &c, 1));
}
