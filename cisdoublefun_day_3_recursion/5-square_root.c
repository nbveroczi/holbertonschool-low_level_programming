/* Square Root
This is  an recursive function that returns the natural square root of a number
Returns natural square root else return -1 */
int square_root_recursive(int base, int n);
int square_root(int n)
{
  return square_root_recursive(1, n);
}

int square_root_recursive(int base, int n)
{
  int result, square;
  square = base * base; /* power(base2,2); */

  if (n < square)
    {
      result = -1;
    }
  else if (n > square)
    {
      result = square_root_recursive(++base, n);
    }
  else /* if (n == square)  This if statement is implied*/
    {
      result = base;
    }
  return result;
}
/*  Recursive functions know how to do work from a particular point.  It's a
set of iterations and those iterations are created by the function calling itself.
Most functions call other functions or none. The recursive function itself does
not know where the first iteration started unless you give it a parameter.
You can't set the starting point inside the recursive function. */
