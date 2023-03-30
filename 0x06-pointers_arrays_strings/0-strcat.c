#include "main.h"

/**
 * *_strcat - the entry functions
 * Description - this program concatentes 2 string
 * @dest: a variable
 * @src: a variable
 * Return: ptr
*/

char *_strcat(char *dest, char *src)
{
int i, j;
char *ptr;

j = 0;
ptr = dest;
for (i = 0; dest[i] != '\0'; i++)
{
dest[i] = src[j];
j++;
}
dest[i] = '\0';
return (ptr);
}
