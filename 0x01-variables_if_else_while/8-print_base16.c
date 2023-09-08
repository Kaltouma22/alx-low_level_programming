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
	int (i);

	for (i = 0; i <= 9; i++)
	{
		putchar('0' + i);
	}
	for (i = 10; i <= 15; i++)
	{
		putchar('a' + i - 10);
	}
	putchar('\n');
	return (0);
}
