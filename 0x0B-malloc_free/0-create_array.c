#include "main.h"
/**
 * *create_array - function that creates array of chars, and initializes it with a specific char.
 * @size: size of the array.
 * @c: variable of the string.
 * Return: char.
 */

char *create_array(unsigned int size, char c)
{
	if (size < 0)
	{
		return ('\0');
	}

	char *str;

	str = malloc(sizeof(str) * size);

	if (*str == '\0')
	{
		return ('\0');
	}

	int i;

	for (i = 0; i < size; i++)
	{
		str[i] = c;
	}
	return (str);
}
