#include "function_pointers.h"
/**
 * print_name - Function that print a name.
 * @name: Pointer to character
 * @f: Pointer to function
 * Return: Nothing.
 */
void print_name(char *name, void (*f)(char *));
void print_name(char *name, void (*f)(char *))
{
	if (name == NULL || f == NULL)
		return;

	f(name);
}
