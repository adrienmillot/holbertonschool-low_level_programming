#include <stddef.h>
#include <stdlib.h>

/**
 * create_array - creates an array of chars,
 *                and initializes it with a specific char.
 *
 * @size: size of the return pointer
 * @c: character to use to fill
 *
 * Return: a pointer fill a character
 */
char *create_array(unsigned int size, char c)
{
	unsigned int cLoop;
	char *s;

	if (size == 0)
	{
		return (NULL);
	}

	s = malloc(sizeof(char) * size);

	if (s == NULL)
	{
		return (NULL);
	}

	for (cLoop = 0; cLoop < size; cLoop++)
	{
		s[cLoop] = c;
	}

	return (s);
}
