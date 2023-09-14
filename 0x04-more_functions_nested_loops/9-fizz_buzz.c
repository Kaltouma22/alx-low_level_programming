#include <stdio.h>

/**
 * main - prints numbers 1 to 100
 * Fizz instead of the numbers multiples 3
 * Buzz instead of the numbers multiples 5
 * FizzBuzz instead of the numbers multiples 3 & 5
 * separated by space
 *
 * Return: Alwayz 0
*/

int main(void)
{
	int (i);

	for (i = 1; i <= 100; i++)
	{
		if (i % 3 != 0 && i % 5 != 0)
			printf("%d", i);
		if (i % 3 == 0)
			printf("Fizz");
		if (i % 5 == 0)
			printf("Buzz");
		printf(" ");
	}
	printf("\n");
	return (0);
}
