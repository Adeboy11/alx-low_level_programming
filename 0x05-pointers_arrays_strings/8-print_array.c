#include "main.h"
#include <stdio.h>

/**
 * print_array - other code
 * description - this program prints array
 * @a: pointer variable
 * @n: pointer variable
 * Return: 0.
 */
void print_array(int *a, int n)
{
if (n > 0)
{
for (int i = 0; n > i; i++)
{
if (i != n - 1)
{
printf("%d, ", a[i]);
}
else
{
printf("%d ", a[i]);
}
}
}
printf("\n");
}
