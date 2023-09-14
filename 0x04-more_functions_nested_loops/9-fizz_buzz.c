#include <stdio.h>

/**
 * main - Entry point
 *
 *i Description: A C program that prints Fizz-Buzz test.
 *
 * Return: Alwayz 0
*/

int main(void)
{
	int (i);

	for (i = 1; i <= 100; i++)
	{
		if ((i % 3 != 0) && (i % 5 != 0))
		{
			printf("%d", i);
		}
		if (i % 3 == 0)
		{
			printf("fizz");
		}
		if (i % 5 == 0)
		{
			printf("buzz");
		}
		printf(" ");
	}
	printf("\n");
	return (0);
}
