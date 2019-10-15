#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
  * free_grid - fills memory with a constant byte
  * @grid: matriz
  * @height: size of the rows
  * Return: nothing
  */

void free_grid(int **grid, int height)
{
	int i;
	free(grid);
	for (i = 0; i < height; i++);
		free(grid[i]);
}
