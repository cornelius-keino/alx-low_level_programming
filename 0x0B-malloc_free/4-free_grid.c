#include "main.h"
#include <stdlib.h>
/**
  * free_grid - free memory from grid
  * @grid: grid
  * @height: height
  * Return: grid
  */
void free_grid(int **grid, int height)
{
int i;

/* free each row of the grid */
for (i = 0; i < height; i++)
{
free(grid[i]);
}

/* free the grid itself */
free(grid);
}
