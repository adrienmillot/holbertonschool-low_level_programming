#include <stdio.h>
#include <stdarg.h>
#include <stddef.h>

/**
 * print_strings - prints strings
 *
 * @separator: character who separate number
 * @n: element's string
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int cLoop;
	va_list list;
	char *argument;

	va_start(list, n);

	for (cLoop = 0; cLoop < n; cLoop++)
	{
		argument = va_arg(list, char *);
		if (argument == NULL)
			printf("%s", "(nil)");
		else
			printf("%s", argument);

		if (cLoop < n - 1 && separator != NULL)
		{
			printf("%s", separator);
		}
	}
	va_end(list);

	printf("\n");
}
