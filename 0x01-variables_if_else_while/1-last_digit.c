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
	lastDigit = abs(n) % 10;

	printf("Last digit of %d is %d ", n, lastDigit);

	if (lastDigit == 0)
	{
		printf("and is %d", lastDigit);
	}
	else if (lastDigit > 5)
	{
		printf("and is greater than 5");
	}
	else if (lastDigit < 6)
	{
		printf("and is less thant 6 and not 0");
	}

	return (0);
}
