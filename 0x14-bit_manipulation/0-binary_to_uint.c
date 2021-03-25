/**
 * binary_to_uint - converts a binary number to an unsigned int
 *
 * @b: binary character
 *
 * Return: decimal number
 */
unsigned int binary_to_uint(const char *b)
{
	int result = 0, cLoop = 0;

	if (!b)
		return (0);
	while (b[cLoop])
	{
		switch (b[cLoop])
		{
			case '0':
				result *= 2;
			break;
			case '1':
				result *= 2;
				result += 1;
			break;
			default:
				return (0);
			break;
		}
		cLoop++;
	}

	return (result);
}
