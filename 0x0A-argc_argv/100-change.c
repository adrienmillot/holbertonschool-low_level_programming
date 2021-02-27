#include <stdio.h>
#include <stdlib.h>

/**
 * main - check the code for Holberton School students.
 *
 * @argc: argument's number
 * @argv: argument's array
 *
 * Return: Always 0.
 */
int main(int argc, char *argv[])
{
	int number, coins = 0, coinValues[] = {25, 10, 5, 2, 1};
	unsigned int cLoop;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	number = atoi(argv[1]);

	while (number > 0)
	{
		for (cLoop = 0; cLoop < sizeof(coinValues); cLoop++)
		{
			if (number >= coinValues[cLoop])
			{
				number -= coinValues[cLoop];
				coins++;
				break;
			}
		}
	}

	printf("%d\n", coins);

	return (0);
}
