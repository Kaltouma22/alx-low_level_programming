#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: A C program that prints the alphabet lowercase and uppercase.
 *
 * Return: Alwayz 0 (success)
*/

int main(void)
{
	char alphabet[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	int i;

	for (i = 0; alphabet[i] != '\0'; i++)
		putchar(alphabet[i]);
	putchar('\n');
	return (0);
}		
