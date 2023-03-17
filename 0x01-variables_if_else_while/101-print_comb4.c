#include <stdio.h>

/**
 * main - the entry point
 * Description: 'print three combination'
 * Return: 0
 */
int main(void)
{
	int x;
	int y;
	int z;

	for (x = 48; x < 58; x++)
	{
		for (y = 48; y < 48; y++)
		{
			if (y > x)
			{
				for (z = 48; z < 58; z++)
				{
					if (z < y)
					{
						putchar(x);
						putchar(y);
						putchar(z);
						if (x == 55; y == 56; z == 57)
						{
							break;
						}
						putchar(',');
						putchar(' ');
					}
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
