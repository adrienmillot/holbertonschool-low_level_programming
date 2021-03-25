/**
 * _strlen_recursion - return the length of a string
 *
 * @s: char pointer
 *
 * Return: the length of a string
 */
int _strlen_recursion(const char *s)
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
 * binary_to_uint - converts a binary number to an unsigned int
 *
 * @b: binary character
 *
 * Return: decimal number
 */
unsigned int binary_to_uint(const char *b)
{
	int result = 0, base = 1, length, cLoop;

	if (!b)
		return (0);

	length = _strlen_recursion(b);

	for (cLoop = length - 1; cLoop >= 0; cLoop--)
	{
		if (b[cLoop] != '1' || b[cLoop] != '0')
			return (0);
		if (b[cLoop] == '1')
			result += base;

		base *= 2;
	}

	return result;
}
