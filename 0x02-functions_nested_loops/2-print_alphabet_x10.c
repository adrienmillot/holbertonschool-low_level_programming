#include "holberton.h"

/**
 * print_alphabet_x10 - Print 1O times alphabet
 *
 * Return: void
 */
void print_alphabet_x10(void)
{
	char c;
	int repeat;

	for (repeat = 0; repeat < 10; repeat++)
	{
		for (c = 'a'; c <= 'z'; c++)
		{
			_putchar(c);
		}
		_putchar('\n');
	}
}
