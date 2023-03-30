#include "main.h"

/**
 * reverse_array - the entry functions
 * Description - this program concatentes 2 string
 * @a: a variable
 * @n: a variable
 * Return: void
 */

void reverse_array(int *a, int n)
{
	int i;
	int tmp;

	for (i = 0; i < n / 2; i++)
	{
		tmp = a[i];
		a[i] = a[n - i - 1];
		a[n - i -  1] = tmp;
	}
}
