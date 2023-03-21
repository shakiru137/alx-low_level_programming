#include "main.h"
/**
 *_islower - Function to check for lower case character
 * @c: The character to be checked
 * Return: 1 if successfule else 0.
 */
int _islower(int c)
{

	if (c >= 97 && c <= 122)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
