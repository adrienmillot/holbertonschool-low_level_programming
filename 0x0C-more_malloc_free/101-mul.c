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
 * _strlen_recursion - return the length of a string
 *
 * @s: char pointer
 *
 * Return: the length of a string
 */
int _strlen_recursion(char *s)
{
	if (*s != '\0')
	{
		return (_strlen_recursion(s + 1) + 1);
	}
	else
	{
		return (0);
	}
}

/**
 * _memset - fills the first n bytes of the memory area pointed to by s
 *           with the constant byte b
 *
 * @s: pointer to memory area
 * @b: constant
 * @n: number ot bytes to fill
 *
 * Return: write n bytes of value b
 */
int *_memset(int *s, int b, unsigned int n)
{
	unsigned int cLoop;

	for (cLoop = 0; cLoop < n; cLoop++)
	{
		s[cLoop] = b;
	}

	return (s);
}

/**
 * multiply - multiplies two positive numbers.
 *
 * @prmNum1: char number 1
 * @prmNum2: char number 2
 *
 * Return: result.
 */
char *multiply(char *prmNum1, char *prmNum2)
{
	int size1 = _strlen_recursion(prmNum1);
	int size2 = _strlen_recursion(prmNum2);
	int size = size1 + size2;
	int *result = malloc(sizeof(int) * size);
	int cLoop1 = 0, cLoop2 = 0, indexNumber1, indexNumber2, carry, digit1, digit2;
	int sum = 0;
	char *s;

	if (result == NULL)
	{
		return (NULL);
	}

	if (size1 == 0 || size2 == 0)
	{
		return (NULL);
	}

	result = _memset(result, 0, size1 + size2);

	for (indexNumber1 = size1 - 1; indexNumber1 >= 0; indexNumber1--)
	{
		carry = 0;
		digit1 = prmNum1[indexNumber1] - 48;
		cLoop2 = 0;

		for (indexNumber2 = size2 - 1; indexNumber2 >= 0; indexNumber2--)
		{
			digit2 = prmNum2[indexNumber2] - 48;
			sum = digit1 * digit2 + result[cLoop1 + cLoop2] + carry;
			carry = sum / 10;
			result[cLoop1 + cLoop2] = sum % 10;
			cLoop2++;
		}

		if (carry > 0)
		{
			result[cLoop1 + cLoop2] += carry;
		}

		cLoop1++;
	}

	for (indexNumber1 = cLoop1 + cLoop2 - 1; indexNumber1 >= 0 && result[indexNumber1] == 0; indexNumber1--)
	{
		if (result[indexNumber1] != 0)
			break;
	}

	if (indexNumber1 == -1)
	{
		return (NULL);
	}

	size = indexNumber1 + 1;
	s = malloc(sizeof(char) * (size + 1));

	for (indexNumber2 = 0; indexNumber2 < size; indexNumber2++)
	{
		digit1 = result[indexNumber1 - indexNumber2];
		s[indexNumber2] = digit1 + 48;
	}

	s[size] = '\0';

	return (s);
}

/**
 * main - check the code for Holberton School students.
 *
 * Return: Always 0.
 */
int main(int argc, char *argv[])
{
	int cLoop;

	if (argc != 3)
	{
		printf("Error\n");
		return (98);
	}

	for (cLoop = 1; cLoop < argc; cLoop++)
	{
		if (!isNumber(argv[cLoop]))
		{
			printf("Error\n");
			exit(98);
		}
	}

	printf("%s\n", multiply(argv[1], argv[2]));

	return (0);
}
