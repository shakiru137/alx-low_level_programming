#include "main.h"
/**
 * print_numbers - function that print the numbers 0 to 9
 * @c: integer variable
 * Return: void
 */

void print_numbers(void)
{
	int c;

	for (c = '0' ; c <= '9' ; c++)
	{
		_putchar(c);
	}
	_putchar('\n');
}
