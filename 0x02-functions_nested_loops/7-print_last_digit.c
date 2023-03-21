#include "main.h"
/**
 * print_last_digit - print program
 * Description - a program that print last digits
 * @x: x is the variable
 * Return: 0
*/
int print_last_digit(int x)
{
int y;
y = x % 10;
_putchar(y + '0');
return (y);
}
