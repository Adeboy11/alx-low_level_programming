#include "main.h"

/**
 * _strspn - compute length of matching contiguous bytes
 * @s: string to calculate substring length from
 * @accept: string containing bytes to match
 * Return: length of matching contiguous bytes
 */

unsigned int _strspn(char *s, char *accept)
{
int count, i, match;

while (*s)
{
for (i = 0; i < accept[i]; i++)
{
if (*s == accept[i])
{
count++;
match = 1;
}
}
if (!match)
{
return (count);
}
match = 0;
s++;
}
return (count);
}
