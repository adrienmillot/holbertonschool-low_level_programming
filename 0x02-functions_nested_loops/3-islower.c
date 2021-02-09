#include "holberton.h"

/**
 * _islower - check for lowercase character
 *
 * @c: ASCII character number
 *
 * Return: int
 */
int _islower(int c)
{
	int resultCode;

	if (c >= 'a' && c <= 'z')
	{
		resultCode = 1;
	}
	else
	{
		resultCode = 0;
	}

	return (resultCode);
}
