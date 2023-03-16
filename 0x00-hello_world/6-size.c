#include <stdio.h>
/**
 * main - program that uses the size of command
 * Return: 0
 */
int main(void)
{
char a;
int x;
long int y;
long long int z;
float f;
printf("The size of char: %lu byte(s)\n", (unsigned long)sizeof(a));
printf("The size of an int: %lu byte(s)\n", (unsigned long)sizeof(x));
printf("The size of a long int: %lu byte(s)\n", (unsigned long)sizeof(y));
printf("The size of a long long int: %lu byte(s)\n", (unsigned long)sizeof(z));
printf("The size of float: %lu byte(s)\n", (unsigned long)sizeof(f));
return (0);
}
