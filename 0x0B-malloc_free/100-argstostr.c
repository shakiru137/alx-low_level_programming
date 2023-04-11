#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _strlen - lenght of string
 * @s: the string
 * Return: length
 */
size_t _strlen(const char *str)
{
	int length;

	if (!str)
		return (0);
	for (length = 0; str[length]; length++)
	{
	}
	return (length);
}
/**
 * argstostr - concasts args to str
 * @ac: # of args
 * @av: names of args
 * Return: char *
 */
char *argstostr(int ac, char **av)
{
	int i, j;
	int x = 0;
	int len = 0;
	char *newstring;

	if (!ac || !av)
	{
		return (NULL);
	}

	for (i = 0; i < ac; i++)
	{
		len += _strlen(*(av + i));
	}

	newstring = malloc(sizeof(char) * (len + ac + 1));
	
	if (!newstring)
	{
		return (NULL);
	}
	
	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j]; j++, x++)
		{
			newstring[x] = av[i][j];
		}
		newstring[x++] = '\n';
	}
	
	newstring[x] = '\0';
	
	return (newstring);
}
