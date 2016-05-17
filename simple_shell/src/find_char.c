/* This is a function that finds a char */

int find_char(char *s, char c)
{
  int i;
  for (i = 0; s[i]!='\0'; i++)
    {
      if(s[i] == c)
        {
          return i;
        }
    }
  return -1;
}
