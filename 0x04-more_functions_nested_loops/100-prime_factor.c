#include <stdio.h>
#include <math.h>
/**
 * main - largest prime factor of the number
 * Return: void
 */

int main(void)
{
	long x, maxf;
	long number = 612852475143;
	double sqaure = sqrt(number);

	for (x = 1 ; x <= sqaure ; x++)
	{
	if (number % x == 0)
	{
	maxf = number / x;
	}
	}
	printf("%ld\n", maxf);
	return (0);
}
