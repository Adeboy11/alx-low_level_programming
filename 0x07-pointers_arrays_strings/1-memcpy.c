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
char *p;

p = dest;
while (n)
{
*dest++ = *src++;
n--;
}
return (p);
}
