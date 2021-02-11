#include "holberton.h"

/**
 * print_square - prints a square, followed by a new line.
 *
 * @size: square size
 *
 * Return: Always 0.
 */
void print_square(int size)
{
	int column, row;

	for (row = 0; row < size; row++)
	{
		for (column = 0; column < size; column++)
		{
			_putchar('#');
		}
		_putchar('\n');
	}

	if (size <= 0)
	{
		_putchar('\n');
	}
}
