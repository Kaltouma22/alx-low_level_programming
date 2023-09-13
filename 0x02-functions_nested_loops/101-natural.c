#include <stdio.h>

/**
 * main - Entry point
 *
 *i Description: A C program that prints sum of all the multiples of 3 or 5 below.
 *
 * Return: Alwayz 0
*/

int main(void)
{
	int (i);
	int sum = 0;

	for (i = 0; i < 1024; i++)
	{
		if (i % 5 == 0 || i % 3 == 0)
			sum += i;
	}
	printf("%d\n", sum);
	return (0);
}
