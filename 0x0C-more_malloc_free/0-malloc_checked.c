#include "main.h"
#include <stdlib.h>
/**
 * malloc_checked - a function that allocates memory using malloc.
 * @b: unsingned int variable
 * Return: Nothing.
 */
void *malloc_checked(unsigned int b)
{
	unsigned int *ptr;

	ptr = malloc(sizeof(int) * b);
	return (ptr);
}
