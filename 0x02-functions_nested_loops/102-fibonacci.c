#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: A C program that prints fibonacci numbers.
 *
 * Return: Alwayz 0
*/

int main (void)
{
	unsigned long int a = 1;
	unsigned long int b = 2;
	unsigned long int c;
	int i;

	printf("%lu, %lu, ", a, b);
	for (i = 3; i <= 50; i++)
	{
		c = a + b;
		if (i == 50)
			printf("%lu\n", c);
		else
		{
			printf("%lu, ", c);
			a = b;
			b = c;
		}
	}
	return (0);
}
