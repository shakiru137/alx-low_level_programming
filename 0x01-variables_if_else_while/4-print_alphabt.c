#include<stdio.h>
#include<stdlib.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int alphabet;

	for (alphabet = 'a' ; alphabet <= 'z' ; alphabet++)
	{
		if (alphabet == 'q' || alphabet == 'e')
		{
			continue;
		}
		putchar(alphabet);
	}
	putchar('\n');

	return (0);
}
