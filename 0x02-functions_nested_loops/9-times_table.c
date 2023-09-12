#include "main.h"

/**
 * times_table - function that prints the 9 times table.
*/

void times_table(void)
{
	int i, j, prod;

	for (i = 0; i < 10; i++)
	{
		_putchar(48);
		for (j = 1; j < 10; j++)
		{
			_putchar(',');
			_putchar(' ');

			prod = i * j;

			if (prod < 10)
				_putchar(' ');
			else
				_putchar((prod / 10) + 48);

			_putchar((prod % 10) + 48);
		}
		_putchar('\n');
	}
}
