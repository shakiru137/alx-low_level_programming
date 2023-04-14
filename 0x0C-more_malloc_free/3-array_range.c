#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * array_range - a function that creates an array os integers
 * @min: lower end of values
 * @max: upper end
 * Return: int *
 */

int *array_range(int min, int max)
{
	int *newarray;
	int i;

	if (min > max)
		return (NULL);
	newarray = malloc(sizeof(int) * (max - min + 1));
	if (newarray == NULL)
		return (NULL);
	for (i = 0; min <= max; i++)
	{
		newarray[i] = min;
		min++;
	}
	return (newarray);
}
