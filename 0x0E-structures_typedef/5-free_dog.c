#include "dog.h"
#include <stdlib.h>
/**
 * free_dog - Write a function that frees dogs.
 * @d: struct pointer
 * Return: Nothing.
 */
void free_dog(dog_t *d)
{
	free(d->name);
	free(d->owner);
	free(d);
}
