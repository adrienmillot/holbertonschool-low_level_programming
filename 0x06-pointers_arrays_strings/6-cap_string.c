#include <stdio.h>
/**
 * isLowerAlpha - test lower alpha character.
 *
 * @c: char pointer
 *
 * Return: string with capitalize word
 */
int isLowerAlpha(char c)
{
	return (c >= 'a' && c <= 'z');
}
/**
 * isUpperAlpha - test upper alpha character.
 *
 * @c: char pointer
 *
 * Return: string with capitalize word
 */
int isUpperAlpha(char c)
{
	return (c >= 'A' && c <= 'Z');
}
/**
 * isDigit - test digit character.
 *
 * @c: char pointer
 *
 * Return: string with capitalize word
 */
int isDigit(char c)
{
	return (c >= '0' && c <= '9');
}
/**
 * isSeparator - test separactor character.
 *
 * @c: char pointer
 *
 * Return: string with capitalize word
 */
int isSeparator(char c)
{
	return (
		c == ',' ||
		c == ';' ||
		c == '.' ||
		c == '!' ||
		c == '?' ||
		c == '"' ||
		c == '(' ||
		c == ')' ||
		c == '{' ||
		c == '}'
	);
}

/**
 * cap_string - capitalizes all words of a string.
 *
 * @c: char pointer
 *
 * Return: string with capitalize word
 */
char *cap_string(char *c)
{
	int cLoop;
	char current, previous;

	for (cLoop = 0; c[cLoop] != '\0'; cLoop++)
	{
		current = c[cLoop];
		previous = c[cLoop - 1];

		if (
			isLowerAlpha(current) &&
			!isUpperAlpha(previous) &&
			!isDigit(previous) &&
			previous != '-' &&
			!isLowerAlpha(previous)
		)
		{
			c[cLoop] -= 32;
		}
	}

	return (c);
}
