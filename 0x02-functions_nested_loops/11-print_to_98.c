#include "holberton.h"

/**
 * displayNumber - display a number
 *
 * @number: number to show
 *
 * Return: int - result of addition
 */
void displayNumber(int number)
{
	if (number < 0)
	{
		_putchar('-');
		number *= -1;
	}

	int lastDigit = number % 10;

	if (number >= 10)
	{
		number /= 10;
		displayNumber(number);
	}

	_putchar(lastDigit + '0');
}

/**
 * print_to_98 - prints all natural numbers from n to 98
 *
 * @n: number to begin the count
 *
 * Return: void
 */
void print_to_98(int n)
{
	int number;

	if (n > 98)
	{
		for (number = n; number >= 98; number--)
		{
			displayNumber(number);

			if (number > 98)
			{
				_putchar(',');
				_putchar(' ');
			}
		}
		_putchar('\n');
	}
	else if (n < 98)
	{
		for (number = n; number <= 98; number++)
		{
			displayNumber(number);

			if (number < 98)
			{
				_putchar(',');
				_putchar(' ');
			}
		}
		_putchar('\n');
	}
	else if (n == 98)
	{
		displayNumber(n);
		_putchar('\n');
	}
}
