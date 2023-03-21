#include "main.h"
/**
 * print_sign - Write a program that print the sign of a number.
 * @n: Variable to be determine.
 * Return: Always 1 if successful else 0.
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar(43);
		return (1);
	}
	else if (n == 0)
	{
		_putchar(48);
		return (0);
	}
	else
	{
		_putchar(45);
		return (-1);
	}
}
