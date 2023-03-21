#include <main.h>

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
putchar(h / 10 + '0');
putchar(h % 10 + '0');
putchar(':');
putchar(m / 10 + '0');
putchar(m % 10 + '0');
putchar('\n');
}
}
}
