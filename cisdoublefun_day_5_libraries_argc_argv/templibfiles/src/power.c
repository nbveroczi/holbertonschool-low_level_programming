/* This is a function that returns the value of x raised to the power of y. */

int power(int x, int y)
{
  int result;

  if (y < 0)
    {
      result = -1;
    }
  else if (y == 0)
    {
      result = 1;
    }
  else
    {
      result = x * power(x, y - 1);
    }

  return(result);
}
