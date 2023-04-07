#include <stdio.h>
#include <stdlib.h>
/**
 * main - Write a program that adds positive numbers.
 * @argc: argument count
 * @argv: argument vector
 * Return: 0 on success.
 */

int main(int argc, char *argv[])
{
	int i;
	int total = 0;

	if (argc == 0)
	{
		printf("0\n");
	}
	for (i = 1; i < argc; i++)
	{
		if (*argv[i] == '\0')
		{
			printf("Error\n");
			return (1);
		}
	}

	for (i = 1; i < argc; i++)
	{
		total += atoi(argv[i]);
	}
	printf ("%d\n", total);

	return (0);
}
