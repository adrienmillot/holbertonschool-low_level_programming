/**
 * isLowerAlpha - test if a character is lowercase.
 *
 * @c: char
 *
 * Return: true if it's verify
 */
int isLowerAlpha(char c)
{
	return (c >= 'a' && c <= 'z');
}

/**
 * string_toupper - changes all lowercase letters of a string to uppercase.
 *
 * @c: char pointer
 *
 * Return: Size of the string
 */
char *string_toupper(char *c)
{
	int cLoop;

	for (cLoop = 0; c[cLoop] != '\0'; cLoop++)
	{
		if (isLowerAlpha(c[cLoop]))
		{
			c[cLoop] -= 32;
		}
	}

	return (c);
}
