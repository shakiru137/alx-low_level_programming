#include "main.h"
/**
 * *_strncat - function that concatenates two strings
 * @dest: array to copy to
 * @src: array to copy from
 * @n: n string to be concatenate.
 * Return: pointer to dest.
 */

char *_strncat(char *dest, char *src, int n)
{
	int i = 0;
	int j = 0;

	while (dest[i] != '\0')
	{
	i++;
	}
	while (j < n && src[j] != '\0')
	{
	dest[i] = src[j];
	j++;
	i++;
	}

	return (dest);
}
