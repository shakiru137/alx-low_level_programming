#include "main.h"
#include <stdlib.h>

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
/**
 * string_nconcat - function that concatenates two strings.
 * @s1: first string
 * @s2: second string
 * @n: number of values to be concatenate.
 * Return: ptr pointing to char.
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int i, j;
	char *new_str;
	unsigned int len1 = _strlen(s1);
	unsigned int len2 = _strlen(s2);

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}

	if (n >= len2)
	{
		n = len2;
	}

	new_str = malloc(len1 + n + 1);
	if (new_str == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < len1; i++)
	{
		new_str[i] = s1[i];
	}
	for (j = len1; j < len1 + n; j++)
	{
		new_str[j] = s2[j - len1];
	}
	new_str[j] = '\0';

	return (new_str);
}
