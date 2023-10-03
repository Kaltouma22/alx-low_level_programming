#include <stdio.h>
#include <stdlib.h>

/**
 * main-that multiplies two number
 * @argc: that represents the number of cmdl
 * @argv: it's an array of string containing the cmdl
 * Return: return 0
 */

int main(int argc, char *argv[])
{
	int num1 = atoi(argv[1]);
	int num2 = atoi(argv[2]);
	int result = num1 * num2;

	if (argc != 3)
	{
		printf("Error\n");
	}
	printf("%d\n", result);
	return (0);
}
