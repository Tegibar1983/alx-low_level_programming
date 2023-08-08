#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * free_grid - function than freed memory
 * @grid: input pointer for the 2D array
 * @height: 2D arrray height
 * Return: void pointer
 */
void free_grid(int **grid, int height)
{
int a;

for (a = 0; a < height; a++)
free(grid[a]);
free(grid);
}
