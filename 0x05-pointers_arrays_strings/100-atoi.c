#include "main.h"
#include <stdio.h>

/**
 * _atoi - other code
 * description - this program prints array
 * @s: pointer variable
 * Return: 0.
 */

int _atoi(char *s)
{
	int i = 0, no = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] >= '0' && s[i] <= '9')
		{
			no = (no * 10) + (s[i] - '0');
		}
	}
	return (no);
}
