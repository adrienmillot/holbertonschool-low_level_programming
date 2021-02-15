#include <stdio.h>

/**
 * _strlen - returns the length of a string
 *
 * @s: char pointer
 *
 * Return: Size of the string
 */
int _strlen(char *s)
{
	int size = 0;

	while (*s != '\0')
	{
		size++;
		s++;
	}

	return (size);
}

/**
 * isNumber - test if a character is a number
 *
 * @c: char
 *
 * Return: return 1 if true
 */
int isNumber(char c)
{
	return (c >= '0' && c <= '9');
}

/**
 * _atoi - convert a string to an integer.
 *
 * @s: char pointer
 *
 * Return: int
 */
int _atoi(char *s)
{
	char sign = 1, current, next, previous;
	int size = _strlen(s), cLoop, number = 0;

	for (cLoop = 0; cLoop < size; cLoop++)
	{
		previous = s[cLoop - 1];
		current = s[cLoop];
		next = s[cLoop + 1];

		if (isNumber(current))
		{
			number *= 10;
			number += current - 48;
		}

		if (previous == '-' && isNumber(current))
		{
			sign = -1;
		}

		if (cLoop < size - 1 && isNumber(current) && !isNumber(next))
		{
			sign = 1;
			break;
		}
	}

	return (sign * number);
}
