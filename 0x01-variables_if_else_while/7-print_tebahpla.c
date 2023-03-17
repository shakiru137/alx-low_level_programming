#include<stdio.h>
#include<stdlib.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char d;

	for (d = 'z' ; d >= 'a' ; d--)
	{
		putchar(d);
	}
	putchar('\n');

	return (0);
}
