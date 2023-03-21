#include <stdio.h>

/**
 * print_alphabet - to print alphabet
 * Description - a program that prints alphabet
 * Return: 0
*/

void print_alphabet(void)
{
char a;

for (a = 'a'; a <= 'z'; a++)
{
putchar(a);
}
putchar('\n');
return (0);
}
