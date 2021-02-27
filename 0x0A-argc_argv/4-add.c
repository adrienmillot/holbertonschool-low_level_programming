#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
 * isNumber - check if string is a number
 *
 * @s: string to verify
 *
 * Return: 1 if string is a number.
 */
int isNumber(char *s)
{
	if (*s == '\0')
	{
		return (1);
	}
	if (!isdigit(*s))
	{
		return (0);
	}
	else
	{
		return (isNumber(s + 1));
	}
}

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

	for (cLoop = 1; cLoop < argc; cLoop++)
	{
		if (!isNumber(argv[cLoop]))
		{
			printf("Error\n");
			return (1);
		}
		sum = (sum == 0) ? atoi(argv[cLoop]) : sum + atoi(argv[cLoop]);
	}

	printf("%d\n", sum);

	return (0);
}
