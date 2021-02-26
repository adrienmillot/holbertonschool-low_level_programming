#include <stdio.h>

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
	int cLoop;

	for (cLoop = 0; cLoop < argc; cLoop++)
	{
		printf("%s\n", argv[cLoop]);
	}

	return (0);
}
