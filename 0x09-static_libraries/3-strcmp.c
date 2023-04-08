#include "main.h"
/**
 * _strcmp - function that compare two strings
 * @s1: first string variable
 * @s2: second string variable
 * Return: int value.
 */

int _strcmp(char *s1, char *s2)
{
	int i = 0;
	int j = 0;

	while (s1[i] != '\0' && s2[j] != '\0')
	{
	if (s1[i] != s2[j])
	{
		return (s1[i] - s2[j]);
	}
	i++;
	j++;
	}


	return (0);
}
