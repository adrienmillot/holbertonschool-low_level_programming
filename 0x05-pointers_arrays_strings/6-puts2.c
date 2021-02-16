#include "holberton.h"

/**
 * puts2 - prints every other character of a string, starting with the first character
 *
 * @str: char pointer
 *
 * Return: Size of the string
 */
void puts2(char *str)
{
	while (*str != '\0')
	{
		_putchar(*str);
		str = str + 2;
	}
	_putchar('\n');
}
