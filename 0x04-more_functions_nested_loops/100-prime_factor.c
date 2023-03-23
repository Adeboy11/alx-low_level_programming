#include <stdio.h>
#include <math.h>

/**
 * main - the entry point
 * Description - program to print prime numbers
 * Return : 0
 */

int main(void)
{
long long x;

x = 61285247;
long long maxprime = -1;

if (x % 2 == 0)
{
maxprime = 2;
while (x % 2 == 0)
{
x = x / 2;
}
}
for (long long i = 3; i <= sqrt(x); i += 2)
{
while (x % i == 0)
{
maxprime = i;
x = x / i;
}
printf("Largest prime factor of %lld is: %lld\n", x, maxprime);
return (0);
}
