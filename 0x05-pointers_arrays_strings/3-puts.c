#include <stdio.h>

/**
 * _puts - prints a string
 *
 * @str: Int pointer
 */
void _puts(char *str)
{
	while (*str != '\0')
	{
		putchar(*str);
		str++;
	}
}
