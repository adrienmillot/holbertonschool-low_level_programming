/**
 * leet - encodes a string into 1337.
 *
 * @c: char pointer
 *
 * Return: string encoded
 */
char *leet(char *c)
{
	char target[] = "aeotl";
	char replace[] = "43071";
	int size, s_targ;

	for (size = 0; c[size] != '\0'; size++)
	{
		for (s_targ = 0; target[s_targ] != '\0'; s_targ++)
		{
			if (target[s_targ] == c[size] || target[s_targ] - 32 == c[size])
			{
				c[size] = replace[s_targ];
			}
		}
	}

	return (c);
}
