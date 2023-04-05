#include "main.h"
/**
 * _puts_recursion - Write a function that prints
 * a string, followed by a new line.
 * @s: Pointer variable
 * Return: void.
 */

void _puts_recursion(char *s)
{
	if (*s == '\0')
		return;
	_putchar(*s);
	_puts_recursion(s + 1);
}
