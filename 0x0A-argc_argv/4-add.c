#include <stdio.h>
#include <stdlib.h>
#include "main.h"
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
		if (check_num(argv[i]))
		{
			total += atoi(argv[i]);
		}
		else
		{
			printf("Error\n");
			return (1);
		}
	}
	printf("%d\n", total);

	return (0);
}

/**
 * check_num - Function that ckeck if digit is present in a sstring.
 * @s: pointer
 * Return: 1 if true 0 otherwise
 */

int check_num(char *s)
{
	int k;

	k = 0;
	while (s[k] != '\0')
	{
		if (s[k] >= '0' && s[k] <= '9')
		{
			return (1);
		}
		else
		{
			return (0);
		}
		k++;
	}
	return (0);
}
