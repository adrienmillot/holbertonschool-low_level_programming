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

	return (dest);
}

/**
 * _strncat - concatenates two string
 *
 * @dest: char pointer
 * @src: char pointer
 * @n: number of character
 *
 * Return: string
 */
char *_strncat(char *dest, char *src, int n)
{
	int length, d_size;

	d_size = _strlen(dest);

	for (length = 0; length < n; length++)
	{
		dest[d_size + length] = src[length];
	}

	return (dest);
}
