#include <stddef.h>

/**
 * _strchr - locates a character in a string.
 *
 * @s: string where to search
 * @c: character to search
 *
 * Return: A pointer to the first occurence of c
 */
char *_strchr(char *s, char c)
{
	while (*s >= '\0')
	{
		if (*s == c)
		{
			return (s);
		}
		s++;
	}

	return (NULL);
}
