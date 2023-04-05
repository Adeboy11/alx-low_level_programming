#include "main.h"
#include "_putchar.c"

/**
 * _puts_recursion - recursion
 *@s: variable
 *
 */

void _puts_recursion(char *s)
{
if (*s != '\0')
{
_putchar(*s);
s++;
_puts_recursion(s);
}
else
{
_putchar('\n');
}
}
