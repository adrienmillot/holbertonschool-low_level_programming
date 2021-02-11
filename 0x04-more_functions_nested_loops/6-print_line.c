#include "holberton.h"

/**
 * print_line - draws a straight line in the terminal.
 *
 * @n: width number
 *
 * Return: Always 0.
 */
void print_line(int n)
{
	int width;

	for (width = 0; width < n; width++)
	{
		_putchar('_');
	}

	_putchar('\n');
}
