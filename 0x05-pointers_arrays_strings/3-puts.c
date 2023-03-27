#include "main.h"
/**
 * _puts - Function that print a string
 * @str: Pointer variable
 * Return: void
 */

void _puts(char *str)
{
	while (*str++)
	{
		_putchar(*str);
	}
	_putchar('\n');
}
