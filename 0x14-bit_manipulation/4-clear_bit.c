#include "main.h"

/**
 * clear_bit - change to 0 the bit at a given index.
 * @n: variable number
 * @index: index
 * Return: 1 or -1
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int no = 0;

	if (index > 63)
		return (-1);

	no = 1 << index;
	no = ~no;
	*n = *n & no;
	return (1);
}
