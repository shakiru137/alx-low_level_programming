#include "dog.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * print_dog - Write a function that prints a struct dog
 * @d: The struct variable.
 * Return: Nothing.
 */
void print_dog(struct dog *d)
{
	if (d == NULL)
	{
	}
	else
	{
	if (d -> name == NULL)
	{
		printf("Name: (nil)\n");
	}
	else
	{
		printf("Name: %s\n", d->name);
	}
	if (d -> age < 0)
	{
		printf("Age: (nil)\n");
	}
	else
	{
		printf("Age: %f\n", d->age);
	}
	if (d -> owner == NULL)
	{
		printf("Owner: (nil)\n");
	}
	else
	{
		printf("Owner: %s\n", d->owner);
	}
	}
}

