#include <stdio.h>
/**
 * main - Entry point.
 * Description: Write a program that prints the name of the file it was 
 * compiled from, followed by a new line
 * Return: 0 (SUCCESS).
 */
int main(void)
{
	printf("%s\n", __FILE__);

	return (0);
}
	
