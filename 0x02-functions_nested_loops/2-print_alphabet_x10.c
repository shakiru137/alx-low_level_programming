#include<stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
void print_alphabet_x10(void)
{
	int i;
	int x;

	for (i = 1 ; i <= 10 ; i++)
	{
		for (x = 'a' ; x <= 'z' ; x++)
		{
			putchar(x);
		}
		putchar('\n');
	}
}
int main(void)
{
	print_alphabet_x10();
	return (0);
}
