/**
 * get_endianness - checks the endianness
 *
 * Return: true if check
 */
int get_endianness(void)
{
	unsigned int x = 1;
	char *c = (char *) &x;

	return ((int) *c);
}
