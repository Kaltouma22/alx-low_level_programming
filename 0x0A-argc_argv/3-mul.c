#include <stdio.h>
#include <stdlib.h>

/**
 * main-that multiplies two number
 * @argc: that represents the number of cmdl
 * @argv: it's an array of string containing the cmdl
 * Return:0-seccess, Non-zero-fail
 */

int main(int argc, char *argv[])
{
	int result;

	if (argc == 3)
	{
		result = atoi(argv[1]) * atoi(argv[2]);
		printf("%d\n", result);
	}
	else
	{
		printf("Error\n");
		return (1);
	}

	return (0);
}
