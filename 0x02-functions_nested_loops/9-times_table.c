#include "holberton.h"

/**
 * times_table - prints the 9 times table, starting with 0
 *
 * Return: void
 */
void times_table(void)
{
	int column = 0, row = 0, number, tens, unity;

	for (row = 0; row <= 9; row++)
	{
		for (column = 0; column <= 9; column++)
		{
			number = column * row;

			if (number > 9)
			{
				tens = number / 10;
				unity = number % 10;

				_putchar(tens + '0');
				_putchar(unity + '0');
			}
			else
			{
				if (column > 0)
				{
					_putchar(' ');
				}
				_putchar((column * row) + '0');
			}

			if (column < 9)
			{
				_putchar(',');
				_putchar(' ');
			}
		}

		_putchar('\n');
	}
}
