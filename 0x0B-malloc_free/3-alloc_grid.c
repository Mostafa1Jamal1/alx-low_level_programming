#include <stdlib.h>

/**
 * alloc_grid - create a 2 dimensional array of integers.
 *
 * @width: the width of the array
 * @height: the height of the array
 *
 * Return: a pointer to the 2 2 dimensional array.
 * or NULL on failure or width or height is 0 or negative.
*/

int **alloc_grid(int width, int height)
{
	int **grid;
	int i, j;

	if (width < 1 || height < 1)
		return (0);
	grid = malloc(height * sizeof(int *));
	if (grid == 0)
		return (0);
	for (i = 0; i < height; i++)
	{
		grid[i] = malloc(sizeof(int) * width);
		if (grid[i] == 0)
		{
			for (j = 0; j < i; j++)
				free(grid[j]);
			free(grid);
			return (0);
		}
		for (j = 0; j < width; j++)
			grid[i][j] = 0;
	}
	return (grid);
}
