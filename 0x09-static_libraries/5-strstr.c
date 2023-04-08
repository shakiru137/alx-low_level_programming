#include "main.h"
/**
 * _strstr - function that locates a substring.
 * @haystack: first pointer
 * @needle: second pointer
 * Return: string.
 */

char *_strstr(char *haystack, char *needle)
{
	if (*needle == '\0')
	{
		return (haystack);
	}

	while (*haystack)
	{
		char *h = haystack;
		char *n = needle;

	while (*n != '\0' && *h == *n)
	{
		h++;
		n++;
	}

	if (*n == '\0')
	{
		return (haystack);
	}

	haystack++;
	}

	return ('\0');
}

