#include "main.h"

/**
 * _strcmp - the entry functions
 * Description - this program concatentes 2 string
 * @s1: a variable
 * @s2: a variable
 * Return: (s1[i] - s2[i])
 */

int _strcmp(char *s1, char *s2)
{
int i;

i = 0;
while ((s1[i] == s2[i]) && (s1[i] != '\0'))
{
i++;
}
return (s1[i] - s2[i]);
}
