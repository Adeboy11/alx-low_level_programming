#include "main.h"

/**
 * binary_to_uint - converts binary number to unsigned int.
 * @b: pointers to string of 0's and 1's
 * Return: unsigned int number
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int uint;
	int lent, bin;

	if (!b)
		return (0);

	uint = 0;

	for (lent = 0; b[lent] != '\0'; lent++)
		;

	for (lent--, bin = 1; lent >= 0; lent--, bin *= 2)
	{
		if (b[lent] != '0' && b[lent] != '1')
		{
			return (0);
		}

		if (b[lent] & 1)
		{
			uint += bin;
		}
	}
