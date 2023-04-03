#include "main.h"

/**
 * _memcpy - fills n bytes of memory
 * @dest: varible
 * @src: varible
 * @n: varible
 * Return: p
*/

char *_memcpy(char *dest, char *src, unsigned int n)
{
int i;
char *p;

p = dest;
for (i = 0; i < n; i++)
{
*dest++ = *src++;
}
return (p);
}
