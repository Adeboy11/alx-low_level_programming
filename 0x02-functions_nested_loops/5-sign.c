#include "main.h"

/**
 * print_sign - the _isalpha entry point
 *
 * Description - a programs that check for cases in alphabets
 * @n : c is the variable
 * Return: 0
*/

int print_sign(int n)
{
if (n > 0)
_putchar('+');
else if (n == 0)
_putchar('0');
else
_putchar('-');
}