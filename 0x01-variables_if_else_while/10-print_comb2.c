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
	int n, j;

	for (n = 48; n < 58; n++)
	{
		for (j = 48; j < 58; j++)
		{
			putchar(n);
			putchar(j);

			if (n < 57 || j < 57)
			{
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');

	return (0);
}
