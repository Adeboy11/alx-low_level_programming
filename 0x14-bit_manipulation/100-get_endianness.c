#include "main.h"

/**
 * get_endianness - function for endianness.
 * Return: 0 or 1
 */

int get_endianness(void)
{
	int a = 1;

	if ((a >> 31) == 1)
		return (0);
	else
		return (1);
}
