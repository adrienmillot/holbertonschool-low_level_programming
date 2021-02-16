#include "holberton.h"

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
 * puts_half - prints half of a string
 *
 * @str: char pointer
 *
 * Return: Size of the string
 */
void puts_half(char *str)
{
	int cLoop, size, limit;

	size = _strlen(str);
	limit = (size % 2 != 0) ? (size + 1) / 2: size / 2;

	for (cLoop = limit; cLoop < size; cLoop++)
	{
		_putchar(str[cLoop]);
	}
	_putchar('\n');
}
