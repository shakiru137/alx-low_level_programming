#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>
/**
 * print_all - function that prints anything.
 * @format: list  of types of arguments passed to the function
 *
 * Return: Nothing.
 */
void print_all(const char * const format, ...)
{
	va_list all;

	va_start(all, format);
	printf("%c", va_arg(all, int));
	printf(", ");
	printf("%d", va_arg(all, int));
	printf(", ");
	printf("%s", va_arg(all, char *));
	printf("\n");
	va_end(all);
}
