#include "holberton.h"

/**
 * print_last_digit - prints the last digit of a number
 *
 * @n: number whose last digit must be given
 *
 * Return: 0 if success
 */
int print_last_digit(int n)
{
	int lastDigit = n;

	lastDigit = lastDigit % 10;

	if (lastDigit < 0)
	{
		lastDigit *= -1;
	}

	_putchar(lastDigit + '0');

	return (lastDigit);
}
