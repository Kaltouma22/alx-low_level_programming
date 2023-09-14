#include "main.h"

/**
 * print_square - that prints a square
 * @size: is the size of the square
*/

void print_square(int size)
{
	int l, c;

	if (size <= 0)
		_putchar('\n');
	else
	{
		for (l = 0; l < size; l++)
		{
			for (c = 0; c < size; c++)
				_putchar(35);

			_putchar('\n');
		}
	}
}
