#include "main.h"
/**
 * _strchr - function that locates a character in string.
 * @s: pointer pointing to string
 * @c: character to be located
 * Return: character specified.
 */

char *_strchr(char *s, char c)
{
	int i;
	int length = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
		length++;
	}

	for (i = 0; i < length; i++)
	{
		if (s[i] == c)
			return (&s[i]); 	
	}
	return (0);
}
