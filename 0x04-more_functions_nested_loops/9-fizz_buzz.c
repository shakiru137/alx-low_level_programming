#include<stdio.h>
#include<stdlib.h>
/**
 * main - Write a program that prints the numbers from 1 to 100,
 * Return: Always 0.
 */

int main(void)
{
	int n = 100;

	for (n = 1 ; n <= 100 ; n++)
	{
	if ((n % 3 == 0) && (n % 5 == 0))
	{
		printf("FizzBuzz");
	}
	else if (n % 5 == 0)
	{
		printf("Buzz");
	}
	else if (n % 3 == 0)
	{
		printf("Fizz");
	}
	else
	{
		printf("%d", n);
	}
	if (n != 100)
	{
		printf(" ");
	}
	}
	printf("\n");

	return (0);
}
