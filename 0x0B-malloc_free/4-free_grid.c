#include <stddef.h>
#include <stdlib.h>

/**
 * _strlen_recursion - return the length of a string
 *
 * @s: char pointer
 *
 * Return: the length of a string
 */
int _strlen_recursion(char *s)
{
	if (*s != '\0')
	{
		return (_strlen_recursion(s + 1) + 1);
	}
	else
	{
		return (0);
	}
}

/**
 * free_grid - frees a 2 dimensional grid previously
 *             created by your alloc_grid function.
 *
 * @grid: multi dimensional array of int
 * @height: number of line of array
 */
void free_grid(int **grid, int height)
{
	int row;

	for (row = 0; row < height; row++)
		free(grid[row]);
	free(grid);
}
