#include "main.h"

/**
 * more_numbers - function that print numbers.
*/

void more_numbers(void)
{
	int i;
	int j;

	for (j = 0; j < 11; j++)
	{
		for (i = 0; i < 15; i++)
		{
			if (i >= 10)
			{
				_putchar('0' + (i / 10));
			}
			_putchar('0' + (i % 10));
		}
	_putchar('\n');
	}
}
