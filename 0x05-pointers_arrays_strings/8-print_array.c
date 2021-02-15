#include <stdio.h>

/**
 * print_array - prints n elements of an array of integers
 *
 * @a: int pointer
 * @n: int limit
 *
 * Return: void
 */
void print_array(int *a, int n)
{
	int cLoop;

	for (cLoop = 0; cLoop < n; cLoop++)
	{
		printf("%d", a[cLoop]);

		if (cLoop < n - 1)
		{
			printf(", ");
		}
	}
	printf("\n");
}
