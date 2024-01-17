#include "main.h"

/**
 * free_grid - a func that frees a two dimensional grid
 * @grid: the two dimensional grid
 * @height: height of array
 *
 * Return: nothing
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
