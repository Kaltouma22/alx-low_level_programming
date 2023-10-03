#include <stdio.h>

/**
 * main - that print it's name
 * @argc: represents the number of arguments
 * @argv: is an array of strings that stores these argument
 * Return: return (0)
*/

int main(int argc, char *argv[])
{
	(void)argc;

	printf("%s\n", argv[0]);
	return (0);
}
