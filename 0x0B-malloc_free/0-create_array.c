#include "main.h"
#include <stdlib.h>
/**
 * *create_array - function that creates array of chars,
 * and initializes it with a specific char.
 * @size: size of the array.
 * @c: variable of the string.
 * Return: char.
 */

char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *str;

	str = malloc(sizeof(*str) * size);
	if (size <= '\0')
	{
		return (0);
	}
	for (i = 0; i < size; i++)
	{
		str[i] = c;
	}
	return (str);
}
