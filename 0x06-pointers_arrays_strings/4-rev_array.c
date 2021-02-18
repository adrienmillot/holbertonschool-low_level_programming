#include <stdio.h>

/**
 * reverse_array - reverses the content of an array of integers
 *
 * @a: int pointer
 * @n: pointer's size
 *
 * Return: void
 */
void reverse_array(int *a, int n)
{
	int cLoop, temp;

	for (cLoop = 0; cLoop < n / 2; cLoop++)
	{
		temp = a[cLoop];
		a[cLoop] = a[(n - 1) - cLoop];
		a[(n - 1) - cLoop] = temp;
	}
}
