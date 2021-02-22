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
 * _strspn - gets the length of a prefix substring.
 *
 * @s: string to search
 * @accept: characters to accept
 *
 * Return: a pointer to the first occurrence of the character c
 * 	   in the string s, or NULL if the character is not found
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int length = 0, maxLength = 0;
	int cLoop;

	for (cLoop = 0; s[cLoop] != '\0'; cLoop++)
	{
		if (inArray(s[cLoop], accept))
		{
			length++;
		}
		else
		{
			if (length > maxLength)
				maxLength = length;
			length = 0;
		}
	}

	return (maxLength);
}
