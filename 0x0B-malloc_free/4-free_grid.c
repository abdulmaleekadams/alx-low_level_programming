#include <stdlib.h>

/**
 * free_grid - frees a 2D array created by alloc_grid
 *
 * @grid: pointer to the 2D array
 * @height: height of the 2D array
 *
 * Return: Nothing
 */

void free_grid(int **grid, int height)
{
	int i;

	/* Free memory of each row in the array */
	for (i = 0; i < height; i++)
		free(grid[i]);

	/* Free memory for the array */
	free(grid);
}
