#include "holberton.h"

/**
 * _puts - prints a string
 *
 * @str: Int pointer
 */
void _puts(char *str)
{
	while (*str != '\0')
	{
		_putchar(*str);
		str++;
	}
}
