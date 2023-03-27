#include "main.h"

/**
 * puts_half - other code
 * description - this program prints other half
 * @str: pointer variable
 * Return: 0.
 */

void puts_half(char *str)
{
	int i = 0, j, n, count = 0;

	for (i = 0; str[i] != '\0'; i++)
	{
		count++;
	}
	if (i % 2 == 1)
	{
		n = (count - 1) / 2;
		while (str[n] != '\0')
		{
			_putchar(str[n]);
			n++;
		}
	}
	else
	{
		n = (i / 2);
		while (str[n] != '\0')
		{
			_putchar(str[n]);
			n++;
		}
	}
	_putchar('\0');
}
