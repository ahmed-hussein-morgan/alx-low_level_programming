#include <stdlib.h>

/**
 * free_grid - frees a 2 dimensional grid
 * @grid: first dim
 * @height: second dim
 * Return: 0 successful
*/


void free_grid(int **grid, int height)
{
	if (grid == NULL)
	{
		return;
	}
	while (height--)
	{
		free(grid[height]);
	}
	free(grid);
}
