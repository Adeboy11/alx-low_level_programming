#include <main.h>

/**
 * main - the entry point
 * Description - a program that print string
 * Return: 0
*/

int main(void)
{
char *str = "_putchar";

while (*str)
{
_putchar(*str);
str++;
}
_putchar('\n');
return (0);
}
