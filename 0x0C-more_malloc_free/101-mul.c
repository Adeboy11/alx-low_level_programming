#include "main.h"

/**
 * Error - prints Error str.
 *
 * Return: Error and new line.
 */

void Error(void)
{
	_putchar('E');
	_putchar('r');
	_putchar('r');
	_putchar('o');
	_putchar('r');
	_putchar('\n');
	exit(98);
}

/**
 * allDigits - checks if all the characters are digits.
 * @arg: the arguments of program.
 * Return: 1 all digits 0 otherwise.
 */

int allDigits(char **arg)
{
	int i, j;

	for (i = 1; i <= 2; i++)
		for (j = 0; arg[i][j]; j++)
		{
			if (arg[i][j] < '0' || arg[i][j] > '9')
				return (0);
		}
	return (1);
}

/**
 * _calloc- initializes memory spaces with zero.
 * @nmemb: string 1.
 * @size: string 2, concatenated to 1
 *
 * Return: pointer to the concatenated string.
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int i;
	char *newArray;

	if (nmemb == 0 || size == 0)
		return (NULL);

	newArray = malloc(nmemb * size);
	if (newArray == NULL)
		return (NULL);

	for (i = 0; i < (nmemb * size); i++)
		*(newArray + i) = 0;

	return (newArray);
}
