#include <stdio.h>

/**
 * main-print number of arguments passed
 * @argc: represents the number of arguments
 * @argv: is an array of strings that stores these argument
 * Return:return 0-success , Non-zero-file.
*/

int main(int argc, char *argv[] __attribute__((unused)))
{
	printf("%d\n", argc - 1);
	return (0);
}
