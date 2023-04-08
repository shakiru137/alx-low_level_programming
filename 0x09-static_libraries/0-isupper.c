#include "main.h"
/**
 * _isupper - function to check upper case charater
 * @c: variable to be check
 * Return: 1 or 0
 */

int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}

