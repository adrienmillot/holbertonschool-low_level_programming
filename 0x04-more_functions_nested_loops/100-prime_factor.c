#include <stdio.h>

/**
 * largestPrime - return the largest prime factor.
 *
 * @prmNumber: number to analyze
 *
 * Return: Always 0.
 */
long int largestPrime(long int prmNumber)
{
	long int number;
	int lPrime, nPrime;

	nPrime = 2;
	number = prmNumber;

	while (number != 0)
	{
		if (number % nPrime == 0)
		{
			lPrime = number;
			number /= nPrime;

			if (number == 1)
			{
				break;
			}
		}
		else
		{
			nPrime += 1;
		}
	}

	return (lPrime);
}

/**
 * main - check the code for Holberton School students.
 *
 * Return: Always 0.
 */
int main(void)
{
	printf("%lu\n", largestPrime(612852475143));

	return (0);
}
