#include <stdio.h>
#include <stdarg.h>
#include <stddef.h>

/**
 * print_numbers - prints numbers
 *
 * @separator: character who separate number
 * @n: element's number
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int cLoop;
	va_list list;

	va_start(list, n);

	for (cLoop = 0; cLoop < n; cLoop++)
	{
		printf("%d", va_arg(list, int));

		if (cLoop < n - 1 && separator != NULL)
		{
			printf("%s", separator);
		}
	}
	va_end(list);

	printf("\n");
}
