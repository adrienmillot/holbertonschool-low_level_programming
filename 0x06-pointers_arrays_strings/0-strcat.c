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
