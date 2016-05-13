#include <stdlib.h>
#include "alloc_grid.h"
/* Alloc Grid
This is a function that returns a pointer to a newly created 2 dimensional
integers grid.
Returns each element intialized to 0.  If fails it returns NULL */

int **alloc_grid(int width, int height)
{
  int index;
  int index2;
  int ** grid;
  grid = malloc(sizeof(int *) * height);
  if (grid == NULL)
  {
    return (NULL);
  }
 for (index = 0; index < height; index++)
 {
   grid[index] = malloc(sizeof(int) * width);
   if (grid[index] == NULL)
   {
     return (NULL);
   }
 }
 for (index = 0; index < height; index++)
 {
   for (index2 = 0; index2 < width; index++)
   {
     grid[index][index2] = 0;
   }
 }

 return (grid);
}
