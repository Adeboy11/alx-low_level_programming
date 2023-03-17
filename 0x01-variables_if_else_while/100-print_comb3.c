#include <stdio.h>

/**
 * main - the entry point
 * Discription: 'print all possible combination'
 * Return: 0
 */
int main(void)
{
	int one;
	int two;

	for (one = 0; one <= 9; one++)
	{
		for (two = one + 1; two <= 9; two++)
		{
			putchar(one + '0');
			putchar(two + '0');
			if (one < 8)
			{
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');
	return (0);
}
