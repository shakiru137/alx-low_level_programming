#include "main.h"
/**
 * *rot13 - Function that encode string using rot13
 * @str: string to encode
 * Return: encode string.
 */

char *rot13(char *str)
{
	int i;
	int j;
	char a1[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char a2[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	for (i = 0; str[i] != '\0'; i++)
	{
		for (j = 0; j < 52; j++)
		{
			if (str[i] == a1[j])
			{
				str[i] = a2[j];
				break;
			}
		}
	}
	return (str);
}
