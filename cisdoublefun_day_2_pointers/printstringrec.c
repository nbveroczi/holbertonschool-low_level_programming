void print_string(char *s)
{

  if (*s == '0')
  {
    return;
  }    
    print_char( *s);
    print_string(s + 1);
  
}
