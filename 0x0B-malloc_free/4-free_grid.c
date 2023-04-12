#include "main.h"
#include <stdlib.h>
/**
 * free_grid - Write a function that frees a 2 dimensional grid previouslyp
 * created by your alloc_grid function.
 * @grid: pointer pointing pointer pointing to integers.
 * @height: height if the 2D array.
 * Return: Nothing.
 */

void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
	{
		free(grid[i]);
	}
	free(grid);
}
