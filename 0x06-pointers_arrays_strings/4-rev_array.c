#include "main.h"

/**
 * reverse_array - that reverses the content of an array of integers
 * @a: first number for check code
 * @n: second number
 * @t: int for check output
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
