#include "main.h"
/**
 * _pow_recursion - return the value of x raised to power of y.
 * @x: integer value
 * @y: integer power
 * Return: integer.
 */

int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);

	if (y == 0)
		return (1);

	x = x * _pow_recursion(x, y - 1);

	return (x);
}
