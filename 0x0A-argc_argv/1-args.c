#include <stdio.h>

/**
 * main - that print number of arguments
 * @argc: represents the number of arguments
 * @argv: is an array of strings that stores these argument
 * Return : return (0)
*/

int main(int argc, char *argv[] __attribute__((unused)))
{
	printf("%d\n", argc - 1);

	return (0);
}
