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
 * rev_string - reverses a string
 *
 * @s: char pointer
 *
 * Return: Size of the string
 */
void rev_string(char *s)
{
	char temp;
	int length = _strlen(s) - 1, size = 0;

	while (length/2 > 0)
	{
		temp = s[size];
		s[size] = s[length];
		s[length] = temp;
		length--;
		size++;
	}
}
