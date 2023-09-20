#include "main.h"

/**
 * reverse_array - reverses the content of an array of integers
 * @a: input array of int
 * @n: size of the a
 *
 * Return: nothing
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
