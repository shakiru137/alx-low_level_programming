

C function to print anything.


Yusuf Shakiru Oluwasegun
Write a function that prints anything using Betty style

Prototype: void print_all(const char * const format, ...);
where format is a list of types of arguments passed to the function
c: char
i: integer
f: float
s: char * (if the string is NULL, print (nil) instead
any other char should be ignored
see example
You are not allowed to use for, goto, ternary operator, else, do ... while
You can use a maximum of
2 while loops
2 if
You can declare a maximum of 9 variables
You are allowed to use printf
Print a new line at the end of your function

#include "variadic_functions.h"

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
    print_all("ceis", 'B', 3, "stSchool");
    return (0);
}

Here's the implementation of the function print_all that follows the Betty style:

arduino
Copy code
#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_all - prints anything
 * @format: list of types of arguments passed to the function
 * c: char
 * i: integer
 * f: float
 * s: char * (if the string is NULL, print (nil) instead
 * any other char should be ignored
 *
 * Return: void
 */
void print_all(const char * const format, ...)
{
	va_list args;
	unsigned int i = 0, j;
	char *str;

	const char valid_types[] = "cifs";

	va_start(args, format);

	while (format && format[i])
	{
		j = 0;

		while (valid_types[j])
		{
			if (format[i] == valid_types[j])
			{
				switch (valid_types[j])
				{
					case 'c':
						printf("%c", va_arg(args, int));
						break;
					case 'i':
						printf("%d", va_arg(args, int));
						break;
					case 'f':
						printf("%f", va_arg(args, double));
						break;
					case 's':
						str = va_arg(args, char *);
						if (str)
							printf("%s", str);
						else
							printf("(nil)");
						break;
				}
			}
			j++;
		}
		i++;
	}

	va_end(args);

	printf("\n");
}


















	

