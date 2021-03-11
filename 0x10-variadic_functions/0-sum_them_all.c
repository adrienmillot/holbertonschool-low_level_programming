#include <stdarg.h>

/**
 * sum_them_all - the sum of all its parameters.
 *
 * @n: element's number
 *
 * Return: element's sum
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list list;
	int sum;
	unsigned int cLoop;

	if (n == 0)
		return (0);

	va_start(list, n);
	sum = 0;
	for (cLoop = 0; cLoop < n; cLoop++)
	{
		sum += va_arg(list, int);
	}

	va_end(list);

	return (sum);
}
