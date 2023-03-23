#include "main.h"
/**
 * _isdigit - the main entry
 * Description - this program returns 1 and 0
 * @c : a variable
 * Return: 0
*/

int _isdigit(int c)
{
if ((c >= 48) && (c <= 57))
{
return (1);
}
else
{
return (0);
}
}
