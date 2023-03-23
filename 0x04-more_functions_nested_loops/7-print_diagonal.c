#include "main.h"

/**
 * print_diagonal - the main entry
 * Description - this program prints number
 * Return: 0
 */

void print_diagonal(int x)
{
int a, b;

if (x <= 0)
{
_putchar('\n');
}
else
{
for (a = 1; a <= x; a++)
{
for (b = 1; b < a; b++)
{
_putchar(' ');
}
_putchar('\\');
_putchar('\n');
}
}
}
