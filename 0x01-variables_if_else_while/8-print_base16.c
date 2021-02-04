#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <ctype.h>

/**
 * main - Begin of execution
 *
 * Return: 0 if success
 */
int main(void)
{
	int n, asciiNumber = 48;
	char c;

	for (n = 0; n < 10; n++)
	{
		putchar(n + asciiNumber);
	}

	for (c = 'a'; c <= 'f'; c++)
	{
		putchar(c);
	}

	putchar('\n');

	return (0);
}
