/**
 * _strlen_recursion - return the length of a string
 *
 * @s: char pointer
 *
 * Return: the length of a string
 */
int _strlen_recursion(char *s)
{
	if (*s != '\0')
	{
		return (_strlen_recursion(s + 1) + 1);
	}
	else
	{
		return (0);
	}
}

/**
 * strCmp - compare two string
 *
 * @c: char pointer
 * @size: size of the string
 * @index: incrementation of the comparaison
 *
 * Return: success if the half of the string equals the other half part
 */
int strCmp(char *c, int size, int index)
{
	char c1 = c[index], c2 = c[size - 1];

	if (size <= index)
	{
		return (1);
	}
	if (c1 == c2)
	{
		return (strCmp(c, --size, ++index));
	}
	else
	{
		return (0);
	}
}

/**
 * is_palindrome - returns 1 if a string is a palindrome and 0 if not.
 *
 * @s: string
 *
 * Return: 1 if the string is a palindrome and 0 ifnot
 */
int is_palindrome(char *s)
{
	int size = _strlen_recursion(s);

	return (strCmp(s, size, 0));
}
