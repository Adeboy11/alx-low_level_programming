#include <stdio.h>
#include <stdlib.h>

/**
 * main - multiply 2 arguments passed to it
 * @argc: argument
 * @argv: argument
 * Return: 0
 */

int main(int argc, int *argv[])
{
	int mul = 0;

	if (argc < 2)
	{
		printf("error\n");
		return (1);
	}
	mul = atoi(argv[1]) * atoi(argv[2]);
	printf("%d\n", mul);
}
