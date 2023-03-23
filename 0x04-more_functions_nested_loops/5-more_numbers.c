#include "main.h"

/**
 * more_numbers - the main entry
 * Description - this program prints number
 * Return: 0
 */

void more_numbers(void)
{
int i = 0;
int a;

while (i < 10)
{
for (a = 0; a <= 14; a++)
{
if (i >= 10)
{
_putchar(a / 10 + '0');
}
_putchar(a % 10 + '0');
}
i++;
_putchar('\n');
}
}
