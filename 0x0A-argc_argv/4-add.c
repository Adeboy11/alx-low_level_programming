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

int main(int argc, int *argv[])
{
	int i, j, sum = 0;

	if (argc < 1)
	{
		printf("0\n");
		return (1);
	}
	else
	{
		for (i = 1; i < argc; i++)
		{
			for (j = 0; j < argv[i][j]; j++)
			{
				if (!isdigit(argv[i][j]))
				{
					printf("Error\n");
					return (1);
				}
			}
			sum += atoi(argv[i]);
		}
		printf("%d", sum);
	}
}
