#include "main.h"

/**
 * print_line - the main entry
 * Description - this program prints number
 * Return: 0
 */

void print_line(int a)
{
int x;

if (a <= 0)
{
_putchar('\n');
}
else
{
for (x = 1; x <= a; x++)
{
_putchar('_');
}
_putchar('\n');
}
}
