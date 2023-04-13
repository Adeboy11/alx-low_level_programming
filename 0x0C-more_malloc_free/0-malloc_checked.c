#include <stdlib.h>
#include "main.h"

/**
 * malloc_checked - function that allocates memory using malloc
 * @b: variable
 *
 * Return: pointer
 */

void *malloc_checked(unsigned int b)
{
	unsigned int *point;

	point = malloc(b);
	if (point == NULL)
		exit(98);
	return (point);
}
