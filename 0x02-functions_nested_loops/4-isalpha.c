#include "holberton.h"

/**
 * _isalpha - checks for alphabetic character
 *
 * @c: ASCII character number
 *
 * Return: int
 */
int _isalpha(int c)
{
	int resultCode;

	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
	{
		resultCode = 1;
	}
	else
	{
		resultCode = 0;
	}

	return (resultCode);
}
