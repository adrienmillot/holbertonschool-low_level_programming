#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Begin of execution
 *
 * Return: 0 if success
 */
int main(void)
{
	int n, lastDigit;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	lastDigit = n % 10;

	printf("Last digit of %d is", n, lastDigit);

	if (lastDigit > 5)
	{
		printf(" %d and is greater than 5");
	}
	else if (lastDigit == 0)
	{
		printf(" %d and is 0");
	}
	else if (lastDigit < 6)
	{
		printf(" %d and is less thant 6 and not 0");
	}

	printf("\n");

	return (0);
}
