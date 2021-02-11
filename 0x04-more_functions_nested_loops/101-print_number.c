#include "holberton.h"

/**
 * print_number - print a number.
 *
 * @n: number
 *
 * Return: void.
 */
void print_number(int n)
{
	int lastDigit;

	if (n < 0)
	{
		_putchar('-');
		n *= -1;
	}

	lastDigit = n % 10;

	if (n >= 10)
	{
		n /= 10;
		print_number(n);
	}

	_putchar(lastDigit + '0');
}
