#include <stddef.h>
#include <stdlib.h>
#include <string.h>

/**
 * _strlen_recursion - return the length of a string
 *
 * @s: char pointer
 *
 * Return: the length of a string
 */
int _strlen_recursion(char *s)
{
	if (*s != '\0')
	{
		return (_strlen_recursion(s + 1) + 1);
	}
	else
	{
		return (0);
	}
}

/**
 * str_concat - concatenates two strings.
 *
 * @s1: char pointer to concatenate
 * @s2: char pointer to concatenate
 *
 * Return: char pointer concatenated
 */
char *str_concat(char *s1, char *s2)
{
	char *s;
	int cLoop1, cLoop2, size;

	if (s1 == NULL)
	{
		s1 = "";
	}

	if (s2 == NULL)
	{
		s2 = "";
	}

	size = _strlen_recursion(s1) + _strlen_recursion(s2);

	s = malloc(sizeof(char) * (size + 1));

	if (s == NULL)
	{
		return (NULL);
	}

	for (cLoop1 = 0; s1[cLoop1]; cLoop1++)
	{
		s[cLoop1] = s1[cLoop1];
	}

	for (cLoop2 = 0; s2[cLoop2]; cLoop1++, cLoop2++)
	{
		s[cLoop1] = s2[cLoop2];
	}

	s[cLoop1] = '\0';

	return (s);
}
