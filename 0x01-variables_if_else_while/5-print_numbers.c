#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: A C program that prints all alphabet.
 *
 * Return: Alwayz 0 (success)
*/

int main(void)
{
	int i;

	for (i = 0; i <= 9; i++)
	{
		char digit = '0' + i;
		putchar(digit);
	}
	putchar('\n');
	return (0);
}
