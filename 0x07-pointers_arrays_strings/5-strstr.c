#include "main.h"
/**
 * _strstr - function that locates a substring.
 * @haystack: first pointer
 * @needle: second pointer
 * Return: string.
 */

char *_strstr(char *haystack, char *needle)
{
	int i;
	int j;

	for (i = 0; haystack[i] != '\0'; i++)
	{
		for (j = 0; needle[j] == haystack[i]; j++)
		{
		if (haystack[i] == needle[j])
		{
			return (&haystack[i]);
		}
		}
	}
	return (0);
}

