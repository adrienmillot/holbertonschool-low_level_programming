#include <stdlib.h>

/**
 * malloc_checked - allocates memory
 *
 * @b: size of the memory to allocate
 *
 * Return: pointer
 */
void *malloc_checked(unsigned int b)
{
	void *s;

	s = malloc(b);

	if (s == NULL)
	{
		exit(98);
	}

	return (s);
}
