#include "holberton.h"

/**
 * print_number - print a number.
 *
 * @n: number
 */
void print_number(int n)
{
	unsigned int number;

	number = n;

	if (n < 0)
	{
		_putchar(45);
	}

	if (number / 10)
	{
		print_number(number / 10);
	}

	_putchar((number % 10) + 48);
}
