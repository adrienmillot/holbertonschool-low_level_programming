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
	int sLoop, aLoop;

	for (sLoop = 0; s[sLoop] != '\0'; sLoop++)
	{
		for (aLoop = 0; accept[aLoop] != s[sLoop]; aLoop++)
		{
			if ('\0' == accept[aLoop])
			{
				return (sLoop);
			}
		}
	}

	return (sLoop);
}
