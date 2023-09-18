#include "main.h"

/**
 * swap_int - that that swaps the values of two integers
 * @a: first int
 * @b: second int
*/

void swap_int(int *a, int *b)
{
	int c;
	c = *a;
	*a = *b;
	*b = c;
}
