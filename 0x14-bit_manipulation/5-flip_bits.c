#include <stdio.h>


/**
 * count - prints the binary representation of a number.
 *
 * @n: decimal number
 *
 * Return: number of bit to 1
 */
int count(unsigned long int n)
{
	if (n <= 0)
		return (0);
	if (n & 1)
		return (count(n >> 1) + 1);
	else
		return (count(n >> 1));
}

/**
 * flip_bits - the number of bits you would need to flip to get
 *	       from one number to another
 *
 * @n: first number
 * @m: second number
 *
 * Return: the number of bits you would need to flip to get from one number
 *         to another
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int x;

	x = n ^ m;

	return (count(x));
}
