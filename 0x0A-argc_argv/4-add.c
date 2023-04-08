#include <stdio.h>
#include <stdlib.h>
#include "main.h"
#include <string.h>
#include <ctype.h>
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
	int num;

	if (argc < 2)
	{
		printf("0\n");
	}
	for (i = 1; i < argc; i++)
	{
		if (check_num(argv[i]))
		{
			num = atoi(argv[i]);
			total += num;
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
	unsigned int k;

	k = 0;
	while (s[k] != '\0')
	{
		if (isdigit(s[k]))
		{
			return (1);
		}
		k++;
	}
	return (0);
}
