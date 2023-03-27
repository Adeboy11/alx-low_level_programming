#include "main.h"

/**
 * print_rev - other code
 * description - this program prints reverse
 * @s: pointer variable
 * Return: 0.
 */
void print_rev(char *s)
{
int i = 0;
while (s[i] != '\0')
{
i++;
}
i--;
for (; i > 0; i--)
{
_putchar(s[i]);
}
}
