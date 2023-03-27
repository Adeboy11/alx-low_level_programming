#include "main.h"

/**
 * _puts - other code
 * description - this program prints string
 * @str: pointer variable
 * Return: 0.
 */

void _puts(char *str)
{
int i;
for (i = 0; str[i] != '\0'; i++)
{
putchar(str[i]);
}
putchar('\n');
}
