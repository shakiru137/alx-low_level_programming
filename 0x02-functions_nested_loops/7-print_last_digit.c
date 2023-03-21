#include "main.h"
/**
 * print_last_digit - A function that print the last digit of number
 * @n: last digiit variable
 * Return: Value of the last d1igit.
 */
int print_last_digit(int n)
{
	int lastDigit;

	lastDigit = n % 10;
	if (lastDigit < 0)
	{
		lastDigit = lastDigit * -1;
	}
	_putchar(lastDigit + '0');
	return (lastDigit);
}
