#include "main.h"

/**
 * puts2 - other code
 * description - this program prints every other letter
 * @str: pointer variable
 * Return: 0.
 */

void puts2(char *str)
{
int i, j;
for (i = 0; str[i] != '\0'; i += 2)
{
_putchar(str[i]);
}
_putchar('\0');
}
