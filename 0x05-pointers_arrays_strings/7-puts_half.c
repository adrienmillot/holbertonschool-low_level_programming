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
 * puts_half - prints half of a string
 *
 * @str: char pointer
 *
 * Return: Size of the string
 */
void puts_half(char *str)
{
	int cLoop, size = _strlen(str);

	for (cLoop = (_strlen(str)) / 2; cLoop < size; cLoop++)
	{
		putchar(str[cLoop]);
	}
	putchar('\n');
}
