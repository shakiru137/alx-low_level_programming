#include "main.h"
/**
 * swap_int - Function that swap the value of two integer
 * @a: first variable
 * @b: second interger
 * Return: void
 */

void swap_int(int *a, int *b)
{
	int c;

	c = *a;
	*a = *b;
	*b = c;
}
