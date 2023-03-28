#include "main.h"
/**
 * puts_half - function that print second half of a string.
 * @str: variable
 * Return: void
 */

void puts_half(char *str)
{
	int l;
	int i;
	int n;
	int c = 0;

	for (i = 0; str[i] != '\0'; i++)
	{
	c++;
	}
	l = c;

	if (l % 2 != 0)
	{
	n = (l - 1) / 2;
	for (i = n + 1; i < l; i++)
	{
	_putchar(str[i]);
	}
	}
	else
	{
	n = l / 2;
	for (i = n; i < l; i++)
	{
	_putchar(str[i]);
	}
	}
	_putchar('\n');
}
