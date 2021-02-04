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
	for (int n = 48; n < 58; n++)
	{
		putchar(n);

		if (n < 57)
		{
			putchar(',');
			putchar(' ');
		}

	}
	putchar('\n');

	return (0);
}
