#include "main.h"

/**
 * reverse_array - that compares two strings
 *
 * @a: first number for check code
 * @n: second number
*/

void reverse_array(int *a, int n)
{
	int i, t;

	for (i = 0; i < n / 2; i++)
	{
		t = a[i];
		a[i] = a[n -1 - i];
		a[n - 1 - i] = t;
	}
}
