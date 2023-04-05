#include "main.h"
/**
 * factorial - Funtion that return the factorial of a given number.
 * @n: Interger varible
 * Return: Integer.
 */

int factorial(int n)
{
	if (n < 0)
		return (-1);

	if (n == 0)
		return (1);

	n = n * factorial(n - 1);

	return (n);
}

