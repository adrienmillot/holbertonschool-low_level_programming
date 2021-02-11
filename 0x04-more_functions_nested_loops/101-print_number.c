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
	unsigned int lastDigit;
	int number;

	if (number < 0)
	{
		_putchar('-');
		number *= -1;
	}
	else
	{
		number = n;
	}

	if (number >= 10)
	{
		number /= 10;
		print_number(number);
	}

	lastDigit = number % 10;

	_putchar(lastDigit + '0');
}
