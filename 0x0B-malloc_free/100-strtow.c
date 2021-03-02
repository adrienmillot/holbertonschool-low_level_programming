#include <stddef.h>
#include <stdlib.h>

/**
 * _strlen - returns the length of a string
 *
 * @s: char pointer
 *
 * Return: Size of the string
 */
int _strlen(char *s)
{
	int size = 0;

	while (*s != '\0')
	{
		size++;
		s++;
	}

	return (size);
}

/**
 * characterNumber - returns character number
 *
 * @str: char pointer
 *
 * Return: Size of the string
 */
int characterNumber(char *str)
{
	if (*str != '\0')
	{
		if (*str != ' ')
		{
			return ((characterNumber(str + 1)) + 1);
		}
		else
		{
			return (characterNumber(str + 1));
		}
	}
	else
	{
		return (0);
	}
}

/**
 * wordNumber - returns word number
 *
 * @str: char pointer
 *
 * Return: Word number
 */
int wordNumber(char *str)
{
	if (*str != '\0')
	{
		if (*str != ' ' && *(str + 1) == ' ')
		{
			return ((wordNumber(str + 1)) + 1);
		}
		else
		{
			return (wordNumber(str + 1));
		}
	}
	else
	{
		return (0);
	}
}

/**
 * getWord - returns word
 *
 * @prmGlobal: char pointer
 * @prmOffset: start of the word
 * @prmSize: length of the word
 *
 * Return: Word number
 */
char *getWord(char *prmGlobal, int prmOffset, int prmSize)
{
	char *word;
	int cLoop;

	word = malloc(sizeof(char) * prmSize + 1);

	if (word == NULL)
	{
		return (NULL);
	}

	for (cLoop = 0; cLoop < (prmSize); cLoop++)
	{
		word[cLoop] = prmGlobal[prmOffset + cLoop];
	}

	word[cLoop] = '\0';

	return (word);
}

/**
 * strtow - splits a string into words
 *
 * @str: char pointer
 *
 * Return: word array
 */
char **strtow(char *str)
{
	int cLoop = 0, cLoop1 = 0, size, wordSize, word_number;
	char *word;
	char **words;

	size = _strlen(str);
	word_number = wordNumber(str);

	if (str == NULL || !str || word_number == 0)
	{
		return (NULL);
	}

	words = malloc(sizeof(char *) * (word_number + 1));

	if (words == NULL)
	{
		return (NULL);
	}

	for (cLoop = 0; cLoop < size && cLoop1 < word_number; cLoop++)
	{
		if (str[cLoop] != ' ')
		{
			wordSize++;
		}
		else
		{
			if (wordSize > 0)
			{
				word = getWord(str, cLoop - wordSize, wordSize);
				words[cLoop1] = word;
				wordSize = 0;
				cLoop1++;
			}
		}
	}
	words[cLoop1] = 0;

	return (words);
}
