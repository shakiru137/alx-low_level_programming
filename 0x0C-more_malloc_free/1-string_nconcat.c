#include "main.h"
#include <stdlib.h>
#include<stdio.h>
#include <string.h>
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
	unsigned int len1 = strlen(s1);
	unsigned int len2 = strlen(s2);

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

	new_str = malloc(sizeof(char) * (len1 + n + 1));
	if (new_str == NULL)
	{
		return (NULL);
	}
	for (i = 0; s1[i] != '\0'; i++)
	{
		new_str[i] = s1[i];
	}
	for (j = 0; j < n; j++)
	{
		new_str[i] = s2[j];
		i++;
	}
	new_str[i + 1] = '\0';

	return (new_str);
}
