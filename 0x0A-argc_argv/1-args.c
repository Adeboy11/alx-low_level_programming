#include <stdio.h>

/**
 * main - prints the number of arguments passed to it
 * @argc: argument
 * @argv: argument
 * Return: 0
 */

int main(int argc, int *argv[])
{
	printf("%d\n", argc - 1);
	return (0);
}