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
	unsigned long long int a = 1;
	unsigned long long int b = 2;
	unsigned long long int c;
	int i;

	printf("%llu, %llu, ", a, b);
	for (i = 3; i <= 50; i++)
	{
		c = a + b;
		if (i == 50)
			printf("%llu\n", c);
		else
		{
			printf("%llu, ", c);
			a = b;
			b = c;
		}
	}
	return (0);
}
