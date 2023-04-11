#include <stddef.h>
#include <stdlib.h>

int **alloc_grid(int width, int height)
{
	int i, j;
	int **grid;

	/* Check if width or height is 0 or negative */
	if (width <= 0 || height <= 0)
		return (NULL);

	/* Allocate memory for the 2D array */
	grid = (int **) malloc(height * sizeof(int *));

	/* Check if memory was allocated */
	if (grid == NULL)
		return (NULL);

	/* Allocate memory for each row in the 2D array */
	for (i = 0; i < height; i++)
	{
		grid[i] = (int *) malloc(width * sizeof(int));
		if (grid[i] == NULL)
		{
			/* Free previously allocated memory and return NULL */
			for (j = 0; j < i; j++)
				free(grid[j]);
			free(grid);

			return (NULL);
		}

		/* Initialize each element to 0 */
		for (j = 0; j < width; j++)
			grid[i][j] = 0;
	}

	return (grid);
}
