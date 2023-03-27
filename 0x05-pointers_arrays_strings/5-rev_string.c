#include "main.h"

/**
 * rev_string - other code
 * description - this program prints reverse
 * @s: pointer variable
 * Return: 0.
 */

void rev_string(char *s)
{
int i, count = 0, tmp;
while (s[i] != '\0')
{
count++;
i++;
}
for (i = 0; i < count / 2; i++)
{
tmp = s[i];
s[i] = s[count - i - 1];
s[count - i - 1] = tmp;
}
_putchar('\0');
}
