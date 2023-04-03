#include "main.h"
/**
 * _memset - Write a function that fills memory with a constant byte
 * @s: array variable
 * @b: value to be replaced with
 * @n: n character to be replaced
 * Return: pointer.
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}
	return (s);
}
