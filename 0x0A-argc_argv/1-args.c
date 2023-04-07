#include <stdio.h>
/**
 * main - program that prints the number of arguments passed into it.
 * @argc: argument count
 * @argv: argument vector
 * Return: 0 on success.
 */

int main(int argc, char *argv[])
{
	(void)*argv; /* ignore the used parameter */
	printf("%d\n", argc - 1);

	return (0);
}
