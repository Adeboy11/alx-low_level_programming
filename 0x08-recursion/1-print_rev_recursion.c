#include "main.h"
#include "_putchar.c"

/**
 * _print_rev_recursion - print string in reverse in recursion
 *@s: variable
 *
 */

void _print_rev_recursion(char *s)
{
if (*s != '\0')
{
_print_rev_recursion(s + 1);
_putchar(*s);
}
}
