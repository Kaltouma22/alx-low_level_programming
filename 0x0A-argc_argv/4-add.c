#include <stdio.h>
#include <stdlib.h>

/**
 * main-that adds positive number
 * @argc: number of argument
 * @argv: an array of pointers to arguments
 * Return: return 0.
*/

int main(int argc, char *argv[])
{
	int result = 0;
	char *s;

	while (--argc)
	{
		for (s = argv[argc]; *s; s++)
		{
			if (*s < '0' || *s > '9')
				return (printf("Error\n"), 1);
		}
		result += atoi(argv[argc]);
	}
	printf("%d\n", result);
	return (0);
}
