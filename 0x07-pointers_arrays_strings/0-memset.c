#include "main.h"

/**
 * _memset - fills n bytes of memory
 * @s: varible
 * @b: varible
 * @n: varible
 * Return: s
 */

char *_memset(char *s, char b, unsigned int n)
{
int i;

for (i = 0; i < n; i++)
{
s[i] = b;
}
return (s);
}
