#include<stdio.h>
#include<stdlib.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n;
	for (n = '0' ; n <= '9' ; n++)
	{
		putchar(n);
		putchar(',');
		putchar(' ');
	}
	putchar('\n');

	return (0);
}
