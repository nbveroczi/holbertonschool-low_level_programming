#include <unistd.h>

void print_char(char c)
{
  write(1, &c, 1);
}

void print_string(char *s)
{
  int i;
  i = 0;
  while (s[i] != '\0')
  {
    print_char(s[i]); /* s[i] is the same *(s+i) */
    i++;
  }
}

int main(int ac, char **av)
{
  int i;
  i = ac -1;
  while (i >= 0)
  {
    print_string(av[i]);
    print_char('\n');
    i--;
  }
  return (0);
}
