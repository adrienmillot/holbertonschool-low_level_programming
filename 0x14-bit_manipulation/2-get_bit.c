#include <stdio.h>

/**
 * get_bit - get a bit value at specific index
 *
 * @n:
 * @index:
 *
 * Return: the value of a bit at a given index
 */
int get_bit(unsigned long int n, unsigned int index)
{
	return ((n >> (index)) & 1);
}
