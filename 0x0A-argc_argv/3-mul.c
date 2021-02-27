#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

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
	int cLoop, sum = 0;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}

	for (cLoop = 1; cLoop < argc; cLoop++)
	{
		sum = (sum == 0) ? atoi(argv[cLoop]) : sum * atoi(argv[cLoop]);
	}

	printf("%d\n", sum);

	return (0);
}
