#include <main.h>

/**
 * times_table - times_table programe
 * Description - this program prints the 9 times table
 * Return: 0
 */

void times_table(void)
{
int c;
int r;
int v;
for (r = 0; r < 10; r++)
{
for (c = 0; c < 10; c++)
{
v = c * r;
if (v / 10 != 0)
{
if (r != 0)
{
putchar(',');
putchar(' ');
}
putchar(v / 10 + '0');
putchar(v % 10 + '0');
}
else
{
if (c != 0)
{
putchar(' ');
putchar(' ');
}
putchar (v + '0');
putchar(',');
}
}
putchar('\n');
}
}
