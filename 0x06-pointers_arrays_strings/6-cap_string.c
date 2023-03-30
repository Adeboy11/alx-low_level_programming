#include "main.h"

/**
 * *cap_string - the entry functions
 * Description - this program converts string to uppercase
 * @str: a variable
 * Return: ptr
 */

char *cap_string(char *str)
{
int i;
char *ptr;

i = 0;
ptr = str;
while (str[i])
{
while (!(str[i] >= 'a' && str[i] <= 'z'))
{
i++;
}
if (str[i - 1] == ' ' || str[i - 1] == ',' || str[i - 1] == '?' || str[i - 1] == '\t' || str[i - 1] == '\n' || str[i - 1] == '(' || str[i - 1] == '!' || i == 0 || str[i - 1] == '.' || str[i - 1] == ';' || str[i - 1] == ')' || str[i - 1] == '{' || str[i - 1] == '}' || str[i - 1] == '"')
{
str[i] -= 32;
}
i++;
return (ptr);
}
}
