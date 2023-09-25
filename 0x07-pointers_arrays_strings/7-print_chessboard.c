#include "main.h"

/**
 * print_chessboard - Prints the chessboard.
 * @a: The chessboard represented as an 8x8 array of characters
 */

void print_chessboard(char (*a)[8])
{
	int rows, coln;

	for (rows = 0; rows < 8; rows++)
	{
		for (coln = 0; coln < 8; coln++)
		{
			_putchar(a[rows][coln]);
		}
		_putchar('\n');
	}
}
