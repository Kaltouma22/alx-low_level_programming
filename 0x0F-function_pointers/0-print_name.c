#include <stdio.h>

/**
 * print_name - function that prints a name
 * @name: pointer to a character array representing a name
 * @f: is a function pointer that specifies how the name
 * should be printed
 */

void print_name(char *name, void (*f)(char *))
{
	f(name);
}
