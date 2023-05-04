#include "main.h"

/**
 * set_bit - the bit at a given index
 * @index: index
 * @n: variable n
 * Return: 1 or -1
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int no = 0;

	if (index > 63)
		return (-1);

	no = 1 << index;
	*n = *n | no;
	return (1);
}
