#include <stddef.h>
#include <stdlib.h>

/**
 * alloc_grid - a pointer to a 2 dimensional array of integers.
 *
 * @width: second dimension
 * @height: first dimension
 *
 * Return: pointer to pointer (two dimensional array)
 */
int **alloc_grid(int width, int height)
{
	int **i, column, row;

	if (width <= 0 || height <= 0)
	{
		return (NULL);
	}

	i = malloc(sizeof(int *) * height);

	if (i == NULL)
	{
		return (NULL);
	}

	for (row = 0; row < height; row++)
	{
		i[row] = malloc(sizeof(int) * width);

		if (i[row] == NULL)
		{
			for (; row >= 0; row--)
				free(i[row]);
			free(i);
			return (NULL);
		}
	}

	for (row = 0; row < height; row++)
	{
		for (column = 0; column < width; column++)
		{
			i[row][column] = 0;
		}
	}

	return (i);
}
