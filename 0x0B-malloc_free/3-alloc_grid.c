#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
  * alloc_grid - allocate memory to grid
  * @width: first array
  * @height: second array
  * Return: grid
  */
int **alloc_grid(int width, int height)
{
int **grid;
int i, j;

/* check for invalid width and height */
if (width <= 0 || height <= 0)
{
return (NULL);
}

/* allocate memory for the grid */
grid = (int **)malloc(height * sizeof(int *));
if (grid == NULL)
{
return (NULL);
}
for (i = 0; i < height; i++)
{
grid[i] = (int *)malloc(width * sizeof(int));
if (grid[i] == NULL)
{
/* free previously allocated memory and return NULL */
for (j = 0; j < i; j++)
{
free(grid[j]);
}
free(grid);
return (NULL);
}
}

/* initialize the grid with 0s */
for (i = 0; i < height; i++)
{
for (j = 0; j < width; j++)
{
grid[i][j] = 0;
}
}

return (grid);
}

