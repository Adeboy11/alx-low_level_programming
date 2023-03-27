#include "main.h"
#include <stdio.h>

/**
 * *_strcpy - other code
 * description - this program prints array
 * @dest: pointer variable
 * @src: pointer variable
 * Return: 0.
 */

char *_strcpy(char *dest, char *src)
{
	int i;
	for (i = 0; src[i]; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
