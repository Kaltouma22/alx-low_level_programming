#include "main.h"

/**
 * print_triangle - that prints a triangle
 * @size: is the size of the triangle
*/

void print_triangle(int size)
{
	int l, c, d;

	if (size <= 0)
		_putchar('\n');
	else
	{
		for (l = 0; l < size; l++)
		{
			for (c = 1; c < size - l; c++)
				_putchar(' ');
			for (d = 0; d <= l; d++)
				_putchar(35);

			_putchar('\n');
		}
	}
}
