#include "main.h"

/**
 * print_triangle - prints
 * Description - prints triangle
 * @n : variable
 * Return: Always 0 (Success)
 */

void print_triangle(int n)
{
int i, j;
for (i = 1; i <= n; i++)
{
for (j = i; j <= n; j++)
{
_putchar(' ');
}
for (j = 1; j <= i; j++)
{
_putchar('#');
}
_putchar('\n');
}
}
