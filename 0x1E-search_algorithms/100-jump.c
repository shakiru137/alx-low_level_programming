#include "search_algos.h"
#include <math.h>
/**
 * jump_search - searches for a value in a sorted array
 * using Jump search
 * @array: pointer to the first element of the array
 * to search in
 * @size: number of elements in array
 * @value: value to search for
 *
 * Return: the first index where value is located or
 * -1 if not found
 */
int jump_search(int *array, size_t size, int value)
{
	size_t jump, step, prev;

	if (array == NULL || size == 0)
		return (-1);


	jump = sqrt(size);
	prev = 0;
	step = jump;

	printf("Value checked array[%ld] = [%d]\n", prev, array[prev]);

	while (step < size && array[step] < value)
	{
		prev = step;
		step += jump;
		if (step >= size)
			step = size;
		printf("Value checked array[%ld] = [%d]\n", prev, array[prev]);
	}

	printf("Value found between indexes [%ld] and [%ld]\n", prev, step);

	while (prev < step && prev < size)
	{
		printf("Value checked array[%ld] = [%d]\n", prev, array[prev]);
		if (array[prev] == value)
			return (prev);
		prev++;
	}

	return (-1);
}
