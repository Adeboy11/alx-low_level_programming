#include "main.h"

/**
 * *_strncpy - the entry functions
 * Description - this program concatentes 2 string
 * @dest: a variable
 * @src: a variable
 * @n: a variable
 * Return: ptr
 */

char *_strncpy(char *dest, char *src, int n)
{
int i;
char *ptr;

ptr = dest;
for (i = 0; i < n && src[i] != '\0'; i++)
{
dest[i] = src[i];
}
return (ptr);
}
