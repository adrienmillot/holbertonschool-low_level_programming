#include "holberton.h"

/**
 * print_triangle - prints a triangle.
 *
 * @size: square size
 *
 * Return: Always 0.
 */
void print_triangle(int size)
{
	int row, column;

	for (row = 0; row < size; row++)
	{
		for (column = 1; column <= size; column++)
		{
			if (column >= size - row)
			{
				_putchar('#');
			}
			else
			{
				_putchar(' ');
			}
		}
		_putchar('\n');
	}

	if (size <= 0)
	{
		_putchar('\n');
	}
}
