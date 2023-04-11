#include "main.h"
#include <stdlib.h>
/**
 * str_concat - function that concatenates two strings.
 * @s1: first string pointer
 * @s2: second string pointer
 * Return: strings on success.
 */
char *str_concat(char *s1, char *s2)
{
	int i, j;
	int len, len1, len2;
	char *str;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}
	len1 = _strlen(s1);
	len2 = _strlen(s2);
	len = len1 + len2 + 1;

	str = malloc(sizeof(*str) * len);

	if (str == NULL)
	{
		return (NULL);
	}

	for (i = 0; s1[i] != '\0'; i++)
	{
		str[i] = s1[i];
	}
	for (j = 0; s2[j] != '\0'; j++)
	{
		str[i] = s2[j];
		i++;
	}
	str[i] = '\0';

	return (str);
}

/**
 * _strlen - Returns the length of a string.
 * @str: The string to get the length of
 * Return: The length of @str.
 */

size_t _strlen(const char *str);
size_t _strlen(const char *str)
{
	size_t length = 0;

	while (*str++)
	{
		length++;
	}
	return (length);
}
