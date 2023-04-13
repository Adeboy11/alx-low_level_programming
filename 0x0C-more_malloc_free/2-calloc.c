#include <stdlib.h>
#include "main.h"

/**
 * _calloc - function that allocates memory
 * @nmemb: variable 1
 * @size: variable 2
 *
 * Return: pointer
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *point;
	unsigned int i = 0;

	if (nmemb == 0 || size == 0)
		return (NULL);
	point = malloc(nmemb * size);
	if (point == NULL)
		return (NULL);
	for (; i < nmemb * size; i++)
	{
		point[i] = 0;
	}
	return (point);
}
