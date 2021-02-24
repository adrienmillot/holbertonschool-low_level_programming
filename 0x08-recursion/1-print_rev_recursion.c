#include "holberton.h"

/**
 * _print_rev_recursion - prints a stringin reverse
 *
 * @s: char pointer
 */
void _print_rev_recursion(char *s)
{
	if (*s != '\0')
	{
		_print_rev_recursion(s + 1);
		_putchar(*s);
	}
}
