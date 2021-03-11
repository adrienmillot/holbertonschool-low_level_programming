#include <stdarg.h>
#include <stdio.h>
#include <stddef.h>

/**
 * _strlen - string's size
 *
 * @format: string parameter
 *
 * Return: unsigned integer
 */
unsigned int _strlen(const char * const format)
{
	unsigned int size = 0;

	while (format[size])
	{
		size++;
	}

	return (size);
}

/**
 * print_all - prints anything
 *
 * @format: variable's format to display
 */
void print_all(const char * const format, ...)
{
	va_list list;
	unsigned int i = 0, validableCharacter = 0;
	char *s;

	va_start(list, format);

	while (format && format[i])
	{
		validableCharacter = 0;
		switch (format[i])
		{
			case 'c':
				printf("%c", va_arg(list, int));
				validableCharacter = 1;
			break;
			case 'i':
				printf("%i", va_arg(list, int));
				validableCharacter = 1;
			break;
			case 'f':
				printf("%f", va_arg(list, double));
				validableCharacter = 1;
			break;
			case 's':
				s = va_arg(list, char *);
				if (s == NULL)
					s = "(nil)";
				printf("%s", s);
				validableCharacter = 1;
			break;
		}

		if (i < _strlen(format) - 1 && validableCharacter)
			printf(", ");
		i++;
	}

	printf("\n");

	va_end(list);
}
