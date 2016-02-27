#include "triangles.h"

/* This is a function that prints n triangles of 
   height h. 
*/
void triangles_in_the_term(int h, int n)
{
  int level, space, star, tri;
 
  for (tri = n;  tri > 0; tri--)
    {
      for (level = 1; level <= h; level++)
	{
	  for (space = 1; space <= (h - level); space++)
	    {
	      printf(" ");
	    }
	  for (star = 1; star <= (level * 2 - 1); star++)
	    {
	      printf("*");
	    }
	  printf("\n");
	}
   }
}




