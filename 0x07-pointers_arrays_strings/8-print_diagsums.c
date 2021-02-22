#include <stdio.h>

/**
 * print_diagsums - prints the sum of the two diagonals
 *                  of a square matrix of integers
 *
 * @a: one dimension array
 * @size: array of square
 */
void print_diagsums(int *a, int size)
{
	int cLoop, rightDiagSum = 0, leftDiagSum = 0;

	for (cLoop = 0; cLoop < size * size; cLoop++)
	{
		if (cLoop % (size + 1) == 0)
			leftDiagSum += a[cLoop];
		if (
			cLoop % (size - 1) == 0 &&
			cLoop >= size - 1 &&
			cLoop <= size * (size - 1)
		)
			rightDiagSum += a[cLoop];
	}

	printf("%d, %d\n", leftDiagSum, rightDiagSum);
}
