#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include "main.h"

/**
 * main - adds positive together
 * @argc: argument
 * @argv: argument
 * Return: 0
 */

int main(int argc, char *argv[])
{
	int i, j, a, b, sum;
	char *lett;

	sum = 0;
	if (argc > 0)
	{
		for (i = 1; i < argc; i++)
		{
			lett = argv[i];
			while (*lett != 0)
			{
				if (*lett < 48 || *lett > 57)
				{
					printf("Error\n");
					return (1);
				}
				*lett++;
			}
			sum += atoi(argv[i]);
		}
		printf("%d\n", sum);
	}
	else
	{
		printf("0\n");
		return (0);
	}
}
