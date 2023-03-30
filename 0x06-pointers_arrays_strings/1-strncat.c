#include "main.h"

/**
 * *_strncat - the entry functions
 * Description - this program concatentes 2 string
 * @dest: a variable
 * @src: a variable
 * @n: a variable
 * Return: ptr
 */

char *_strncat(char *dest, char *src, int n)
{
int i, j;
char *ptr;
int index;
int count;
int count1;

ptr = dest;
index = 0;
count = 0;
count1 = 0;
for (i = 0; dest[i] != '\0'; i++)
{
count1++;
}
for (j = 0; src[j] != '\0'; j++)
{
count++;
}
if (index <= count++)
{
if (n > 0)
{
dest[i] = src[index];
n--;
index++;
}
}
return (ptr);
}
