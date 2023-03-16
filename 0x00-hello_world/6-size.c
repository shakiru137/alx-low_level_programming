#include<stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	printf("Size  of char: %d bytes(s)", sizeof(char));
	printf("Size  of int: %d bytes(s)", sizeof(int));
	printf("Size  of long int: %d bytes(s)", sizeof(long int));
	printf("Size  of long long int: %d bytes(s)", sizeof(long long int));
	printf("Size  of float: %d bytes(s)", sizeof(float));

	return (0);
}
