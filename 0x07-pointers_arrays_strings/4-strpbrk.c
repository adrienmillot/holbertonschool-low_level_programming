#include <stddef.h>

/**
 * inArray - Search a character in an array
 *
 * @c: character to search
 * @s: character array where to search
 *
 * Return: true if success
 */
int inArray(char c, char *s)
{
	int cLoop;

	for (cLoop = 0; s[cLoop] != '\0'; cLoop++)
	{
		if (s[cLoop] == c)
		{
			return (1);
		}
	}

	return (0);
}

/**
 * _strpbrk - locates the first occurrence in the string s of any of the bytes
 *            in the string accept
 *
 * @s: character to search
 * @accept: character array where to search
 *
 * Return: pointer to the first charater find.
 */
char *_strpbrk(char *s, char *accept)
{
	while (*s != '\0')
	{
		if (inArray(*s, accept))
		{
			return (s);
		}
		s++;
	}

	return (NULL);
}
