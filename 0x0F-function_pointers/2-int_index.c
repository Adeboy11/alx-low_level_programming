#include "function_pointers.h"

/**
 * int_index - searches for integer in an array
 * @array: pointer to an array
 * @size: size of an array
 * @cmp: comparation function
 * Return: index of array.
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (size <= 0)
		return (-1);
	if (!array || !cmp)
		return (-1);
	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]) != 0)
			return (i);
	}
	return (-1);
}
