#include "main.h"

/**
 * jack_bauer - jack baur
 * Description - a program that prints time
 * Return: 0
*/

void jack_bauer(void)
{
int h;
int m;
for (h = 00; h < 24; h++)
{
for (m = 00; m < 60; m++)
if (m < 60)
{
_putchar(h / 10 + '0');
_putchar(h % 10 + '0');
_putchar(':');
_putchar(m / 10 + '0');
_putchar(m % 10 + '0');
_putchar('\n');
}
}
}
