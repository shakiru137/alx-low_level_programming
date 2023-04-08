#include "main.h"
/**
 * *_strncpy - function that copy a string
 * @dest: array to copy to
 * @src: array to copy from
 * @n: n string to be copied
 * Return: dest.
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i = 0;

	while (i < n && src[i] != '\0')
	{
	dest[i] = src[i];
	i++;
	}
	while (i < n)
	{
	dest[i] = '\0';
	i++;
	}
	return (dest);
}
