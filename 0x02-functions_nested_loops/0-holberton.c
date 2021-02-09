#include "holberton.h"

/**
 * main - Begin of execution
 *
 * Return: 0 if success
 */
int main(void)
{
	char holberton[] = "Holberton";
	int charNb = 0;

	for (; charNb < 9; charNb++)
	{
		_putchar(holberton[charNb]);
	}
	_putchar('\n');

	return (0);
}
