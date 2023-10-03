#include <stdio.h>

/**
 * main-print all arguments it receives
 * @argc: int
 * @argv: list
 * Return:return 0
 */

int main(int argc, char *argv[])
{
	int i = 0;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
