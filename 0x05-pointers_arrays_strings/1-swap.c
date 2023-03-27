#include "main.h"

/**
 * swap_int - check the code
 * description - this program swap two numbers
 * @a: pointer a
 * @b: pointer b
 * Return: Always 0.
 */

void swap_int(int *a, int *b)
{
int temp;
temp = *a;
*a = *b;
*b = temp;
}
