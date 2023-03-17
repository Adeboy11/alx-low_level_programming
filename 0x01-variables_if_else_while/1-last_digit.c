#include <stdlib.h>
#include <time.h>
/* more headers goes there */

/* betty style doc for function main goes there */
/**
 * main - the entry point of the program
 * Description: 'this program prints out string and number'
 * Return: 0
 */
int main(void)
{
	int n, lastDigit;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (lastDigit > 5)
	printf("Last digit of %d is %d and is greater than 5\n", n, lastDigit);
	else if (n == 0)
	printf("last digit of %d is %d and is 0\n", n, lastDigit);
	else
	printf("Last digit of %d is %d and is less than 6 and not 0\n", n, lastDigit);
	return (0);
}
