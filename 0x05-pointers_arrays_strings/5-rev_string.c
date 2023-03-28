#include "main.h"
/**
 * rev_string - Function that reverse a string
 * @s: variable
 * Return: void
 */

void rev_string(char *s)
{
	int length = 0;
	char tmp;
	int string_middle;
	int i;
	int c = 0;


	for (length = 0; s[length] != '\0'; length++)
	{
		c++;
	}
	string_middle = c / 2;

	for (i = 0; i < string_middle; i++)
	{
	tmp = s[i];
	s[i] = s[c - i - 1];
	s[c - i - 1] = tmp;
	}

}
