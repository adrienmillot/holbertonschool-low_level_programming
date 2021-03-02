#include <stddef.h>
#include <stdlib.h>
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
 * _strcat - concatenates two string
 *
 * @dest: char pointer
 * @src: char pointer
 *
 * Return: string
 */
char *_strcat(char *dest, char *src)
{
	int length, d_size, s_size;

	d_size = _strlen(dest);
	s_size = _strlen(src);

	for (length = 0; length < s_size; length++)
	{
		dest[d_size + length] = src[length];
	}
	dest[d_size + length] = '\0';

	return (dest);
}

/**
 * argstostr - concatenates all the arguments of your program
 *
 * @ac: arguments' number
 * @av: argument's list
 *
 * Return: string
 */
char *argstostr(int ac, char **av)
{
	int cLoop, size = 0;
	char *s;

	if (ac == 0 || av == NULL)
	{
		return (NULL);
	}

	for (cLoop = 0; cLoop < ac; cLoop++)
	{
		size += _strlen(av[cLoop]) + 1;

	}

	s = malloc(sizeof(char) * size + 1);

	if (s == NULL)
	{
		return (NULL);
	}

	s[0] = '\0';

	for (cLoop = 0; cLoop < ac; cLoop++)
	{
		_strcat(s, av[cLoop]);
		_strcat(s, "\n");
	}
	_strcat(s, "\0");

	return (s);
}
