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
 * puts2 - prints every other character of a string,
 *         starting with the first character
 *
 * @str: char pointer
 *
 * Return: Size of the string
 */
void puts2(char *str)
{
	int size = _strlen(str), cLoop;

	for (cLoop = 0; cLoop < size; cLoop = cLoop + 2)
	{
		_putchar(str[cLoop]);
	}
	_putchar('\n');
}
