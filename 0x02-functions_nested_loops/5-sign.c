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
		return (1);
	}
	else if (n == 0)
	{
		return (0);
	}
	else
	{
		return (-1);
	}
}
