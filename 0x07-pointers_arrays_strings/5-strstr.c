#include <stddef.h>

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
 * _strstr - locates a substring.
 *
 * @haystack: string where to search
 * @needle: string to search
 *
 * Return: the address to first location
 */
char *_strstr(char *haystack, char *needle)
{
	int haystackLoop = 0, needleLoop = 0, size = _strlen(needle);

	if (needle[0] == '\0')
	{
		return (haystack);
	}

	for (
		haystackLoop = 0, needleLoop = 0;
		haystack[haystackLoop + needleLoop] != '\0';
		needleLoop++
	)
	{
		if (needle[needleLoop] != haystack[haystackLoop + needleLoop])
		{
			haystackLoop += needleLoop;
			needleLoop = 0;
		}

		if (needleLoop == size - 1)
		{
			return (&haystack[haystackLoop]);
		}
	}

	return (NULL);
}
