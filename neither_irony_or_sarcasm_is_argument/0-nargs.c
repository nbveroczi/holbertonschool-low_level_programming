#include <stdio.h>

/* This is a program that prints the number of arguments you passed to it. */
int main(int ac, __attribute__((__unused__))char **av)
{
  printf("%d\n", ac-1);
  return (0);
}
