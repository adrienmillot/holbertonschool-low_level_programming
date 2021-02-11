#include "holberton.h"

/**
 * print_diagonal - draws a diagonal line on the terminal.
 *
 * @n: width number
 *
 * Return: Always 0.
 */
void print_diagonal(int n)
{
	int column, row;

	for (row = 0; row < n; row++)
	{
		for (column = 0; column < n; column++)
		{
			if (column == row)
			{
				_putchar('\\');
				break;
			}
			else
			{
				_putchar(' ');
			}
		}
		_putchar('\n');
	}

	if (n <= 0)
	{
		_putchar('\n');
	}
}
