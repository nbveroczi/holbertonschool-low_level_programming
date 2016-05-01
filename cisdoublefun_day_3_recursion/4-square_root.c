/* Square Root
This is  an iterative function that returns the natural square root of a number
Returns natural square root else return -1 */
int square_root(int n)
{
  int base;
  base = 1;

  while (base * base <= n)
  {
    /* compare n against the current square */
    if (n == base * base)
    {
      return (base);
    }
    else
    {
      base++;
    }
  }

    return (-1);
}

/* wholeNum * wholeNum = the square root */


/*
n = 15
wN = 3
sq = 9

1 1
2 4
3 9
4 16
5 25
*/
