#include "main.h"

/**
 * flip_bits - flip the bits
 * @n: int n.
 * @m: int m.
 * Return: number of bits.
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int bit;

	for (bit = 0; n || m; n >>= 1, m >>= 1)
	{
		if ((n & 1) != (m & 1))
			bit++;
	}

	return (bit);
}
