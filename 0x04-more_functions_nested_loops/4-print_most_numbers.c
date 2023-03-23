#include "main.h"

/**
 * print_most_numbers - the main entry
 * Description - this program prints number
 * @a : a variable
 * @b : a variable
 * Return: 0
 */

int print_most_numbers(void)
{
int i;
for(i = 0; i <= 9; i++)
{
if (i != 2 && i != 4)
{
_putchar(i + '0');
}
}
_putchar('\n');
}
