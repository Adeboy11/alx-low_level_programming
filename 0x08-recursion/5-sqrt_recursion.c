#include "main.h"

/**
 * sq_pow- returns the value of the square root of n
 *@n: variable
 *@i: variable
 *Return: 0
 */

int sq_pow(int n, int i)
{
if (i % (n / i) == 0)
{
if (i * (n / i) == n)
{
return (i);
}
else
{
return (-1);
}
}
return (0 + sq_pow(n, (i + 1)));
}

/**
 * _sqrt_recursion - function that returns the natural
 * square root of a number.
 * @n: integer variable of given number
 * Return: the square root of number
 */

int _sqrt_recursion(int n)
{
if (n < 0)
{
return (-1);
}
else if (n == 0)
{
return (0);
}
else if (n == 1)
{
return (1);
}
return (sq_pow(n, 2));
}
