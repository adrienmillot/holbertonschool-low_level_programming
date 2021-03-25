/**
 * count - return binary length
 *
 * @n: number
 *
 * Return: binary length
 */
unsigned int count(unsigned long int n)
{
	if (n > 1)
		return (count(n >> 1) + 1);
	return (1);
}

/**
 * get_bit - get a bit value at specific index
 *
 * @n: number
 * @index: index
 *
 * Return: the value of a bit at a given index
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned int length = count(n);

	if (index > length)
		return (-1);
	return ((n >> (index)) & 1);
}
