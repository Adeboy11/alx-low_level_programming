#include <stdio.h>
/**
 * main - entry point
 * Description: program to input all alphats
 * Return: 0
 */
int main(void)
{
	int n;
        char x = 'a';

        for (n = 0; n < 16; n++)
	{
		if (n < 10)
		{
			putchar(n + '0');
		}else 
		{
			putchar(x);
			x++;
		}
	}
                putchar(x);
        putchar('\n');
        return (0);
}
