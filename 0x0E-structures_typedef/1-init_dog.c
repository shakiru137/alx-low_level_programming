#include "dog.h"
/**
 * init_dog - Write a function that initialize a variable of type struct dog.
 * @d: the struct variable.
 * @name: dog name.
 * @float: dog age.
 * @owner: dog owner.
 * Return: Nothing.
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	d->name = name;
	d->age = age;
	d->owner = owner;
}
