#include "main.h"
#include <stdlib.h>
/**
 * get_bit - function that returns the value of a bit at a given index.
 * @n: Unsigned decimal number.
 * @index: Position of the value to be returned.
 *
 * Return: value of the bit at index index or -1 if an error occured.
 */
int get_bit(unsigned long int n, unsigned int index)
{
	size_t b, i;

	if (index >= (sizeof(unsigned long int) * 8))
		return (-1);
	for (i = 0; n != 0; i++)
	{
		b = n % 2;
		n >>= 1;
		if (i == index)
			break;
	}
	return (b);
}
