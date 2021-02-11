#include "holberton.h"

/**
 * displayNumber - prints number.
 *
 * @number: number to display
 *
 * Return: Always 0.
 */
void displayNumber(int number)
{
	if (number / 10 > 0)
	{
		displayNumber(number / 10);
		_putchar(number % 10 + '0');
	}
	else
	{
		_putchar(number + '0');
	}
}

/**
 * more_numbers - prints 10 times the numbers, from 0 to 14
 *
 * Return: Always 0.
 */
void more_numbers(void)
{
	int loopNb, number;

	for (loopNb = 0; loopNb < 10; loopNb++)
	{
		for (number = 0; number <= 14; number++)
		{
			displayNumber(number);
		}
		_putchar('\n');
	}
}
