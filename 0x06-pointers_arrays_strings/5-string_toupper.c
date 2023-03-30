#include "main.h"

/**
 * string_toupper - the entry functions
 * Description - this program concatentes 2 string
 * @a: a variable
 * Return: void
 */

char *string_toupper(char *a)
{
	int i;
	char *ptr;

	ptr = a;
	for (i = 0; a[i] != '\0'; i++)
	{
		if (a[i] >= 'a' && a[i] <= 'z')
		{
			a[i] = a[i] - 32;
		}
	}
	return (ptr);
}
