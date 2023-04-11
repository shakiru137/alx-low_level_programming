#include "main.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * _strdup - Write a function that returns a pointer to a newly allocated
 * space in memory, which contains a copy of the string given as a parameter.
 * @str: pointer pointing to new allocated memory.
 * Return: string value otherwise NULL.
 */

size_t _strlen(const char *str);

char *_strdup(char *str)
{
	char *new_str;
	int i;

	new_str = malloc(sizeof(*str) * _strlen(str));
	if (_strlen(str) == 0)
	{
		return (0);
	}
	for (i = 0; str[i] != 0; i++)
	{
		new_str[i]  = str[i];
	}
	if (new_str == NULL)
	{
		return (NULL);
	}
	return (new_str);
}



/**
 * _strlen - Returns the length of a string.
 * @str: The string to get the length of
 * Return: The length of @str.
 */

size_t _strlen(const char *str)
{
	size_t length = 0;

	while (*str++)
	{
		length++;
	}
	return (length);
}
