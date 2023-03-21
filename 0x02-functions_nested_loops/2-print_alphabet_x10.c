#include <main.h>

/**
 * print_alphabet_x10 - the entry point
 * Description - a program that print alphabets
 * Return: 0
*/

void print_alphabet_x10(void)
{
char a;
int x = 0;

while (x < 10)
{
for (a = 'a'; a <= 'z'; a++)
{
putchar(a);
}
x++;
putchar('\n');
}
return (0);
}
