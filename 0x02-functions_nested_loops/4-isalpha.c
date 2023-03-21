#include "main.h"

/**
 * _isalpha - the _isalpha entry point
 *
 * Description - a programs that check for cases in alphabets
 * @c : c is the variable
 * Return: 0
*/

int _isalpha(int c)
{
	if (((c >= 'a') && (c <= 'z')) || ((c >= 'A') || (c <= 'Z')))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
