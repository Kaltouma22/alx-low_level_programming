#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - Prints the sum of the two diagonals of a square matrix
 * @a: Pointer to the square matrix (2D array)
 * @size: Size of the square matrix (number of rows or columns)
*/

void print_diagsums(int *a, int size)
{
	int sum1 = 0;
	int sum2 = 0;
	int r;

	for (r = 0; r < size; r++)
	{
		sum1 += a[r];
		sum2 += a[size - r - 1];
		a += size;
	}
	printf("%d, %d\n", sum1, sum2);
}
