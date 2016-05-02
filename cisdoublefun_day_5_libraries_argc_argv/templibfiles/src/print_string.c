/* This is a function that prints a string. */
int print_char(char c);
void print_string(char *str)
{
  int i;
  i = 0;

  while (str[i] != '\0')
    {
      print_char(str[i++]);
    }
}

int print_char(char c)
{
  return (write(1, &c, 1));
}
