#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
srand((unsigned int)(time(0)));
int i;
char pwd[100];
for (i = 0; i < 4; i++)
{
pwd[i] = rand() % 9;
char capLetter = 'A' + (rand() % 26);
pwd[i + 2] = capLetter;
char letter = 'a' + (rand() % 26);
pwd[i + 3] = letter;
printf("%d%c%c", pwd[i], pwd[i + 2], pwd[i + 3]);
}
printf("\n");
}
