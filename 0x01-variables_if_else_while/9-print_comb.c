#include <stdio.h>

/**
 * main - Entry point
 *
 *i Description: A C program that prints all possible combination of numbers.
 *
 * Return: Alwayz 0 (success)
*/

int main(void)
{
	int (i);

	for (i = 0; i <= 9; i++)
	{
		putchar(48 + i);
		if (i != 9)
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
