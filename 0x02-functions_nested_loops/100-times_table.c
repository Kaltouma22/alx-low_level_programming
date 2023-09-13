#include "main.h"

/**
 * print_times_table - function that prints n times.
 * @n: input number
*/

void print_times_table(int n)
{
	int i, j, prod;

	if (n < 16 && n >= 0)
	{
		for (i = 0; i <= n; i++)
		{
			_putchar(48);
			for (j = 1; j <= n; j++)
			{
				_putchar(',');
				_putchar(' ');

				prod = i * j;

				if (prod < 10)
					_putchar(' ');
				if (prod < 100)
					_putchar(' ');
				
				if (prod > 99)
				{
					_putchar((prod / 100) + 48);
					_putchar((prod / 10) % 10 + 48);
				}
				else if (prod < 100 && prod > 9)
					_putchar((prod / 10) + 48);
				_putchar((prod % 10) + 48);
			}
			_putchar('\n');
		}
	}
}
