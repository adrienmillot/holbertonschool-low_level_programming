#include "holberton.h"
#include <stdio.h>

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
		number = -n;
	}

	lastDigit = number % 10;

	if (number >= 10)
	{
		number /= 10;
		print_number(number);
	}
	_putchar(lastDigit + '0');
}
