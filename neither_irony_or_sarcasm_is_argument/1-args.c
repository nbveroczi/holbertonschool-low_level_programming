#include <stdio.h>

/* This is a program that prints all arguments it receives. */
int main(int ac, char **av)
{
  int index;

  for (index = 0; index < ac; index++) 
    {
      printf("%s\n", av[index]);
    }

  return(0);
}
