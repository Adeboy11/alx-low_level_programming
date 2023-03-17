#include <stdio.h>

/**
 * main - entry point
 * Description: program to input all alphats
 * Return: 0
 */
int main(void)
{
	char x;

	for (x = 'a'; x <= 'z'; x++)
		putchar(x);
	for (x = 'A; x <= 'Z'; x++)
		putchar(x);
	putchar('\n');
	return (0);
}
