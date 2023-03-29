#include "main.h"
/**
 * reverse_array - function that reverse array of integers
 * @a: array variable
 * @n: n element in array
 * Return: void.
 */

void reverse_array(int *a, int n)
{
	int i = 0;
	int tmp;

	while (i < n)
	{
		tmp = a[i];
		a[i] = a[n - 1];
		a[n - 1] = tmp;
		i++;
		n--;
	}
}
