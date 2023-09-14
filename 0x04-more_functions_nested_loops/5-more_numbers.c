#include "main.h"

/**
 * more_numbers - function that print 10 times numbers.
*/

void more_numbers(void)
{
	int i;
	int j;

	for (j = 0; j < 11; j++)
	{
		for (i = 0; i < 15; i++)
		{
			if (i > 9)
				_putchar('0' + (i / 10));

			_putchar('0' + (i % 10));
		}
		_putchar('\n');
	}
}
