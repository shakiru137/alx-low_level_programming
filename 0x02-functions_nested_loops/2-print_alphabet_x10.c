#include "main.h"
/**
 * print_alphabet_x10 - print alphabet in lowercase into ten lines
 *
 */
void print_alphabet_x10(void)
{
	int i;
	int alphabetx10;

	for (i = 1 ; i <= 10 ; i++)
	{
		for (alphabetx10 = 'a' ; alphabetx10 <= 'z' ; alphabetx10++)
		{
			_putchar(alphabetx10);
		}
		_putchar('\n');
	}

}

