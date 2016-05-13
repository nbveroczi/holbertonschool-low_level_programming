#include <stdlib.h>
#include <stdio.h>
/* This is a function that frees a 2 dimensional grid. */

void free_grid(int **grid, int height)
{
  int index;

  for (index = 0; index < height; index++)
  {
    free(grid[index]);
  }
  free(grid);

return;
}
