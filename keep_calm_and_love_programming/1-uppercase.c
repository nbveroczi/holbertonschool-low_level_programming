char uppercase(char c)
{
  char result;

  if ((c >= 'a') && (c <= 'z'))
    {
      result = c - ('a' - 'A');
    } 
  else 
    {
      result = c;
    }
  return result;
}
