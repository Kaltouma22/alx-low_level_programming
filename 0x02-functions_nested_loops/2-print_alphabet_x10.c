#include "main.h"

/**
 * print_alphabet_x10 - use the function to print alphabet 10 times.
*/

void print_alphabet_x10(void)
{
	int ch, i = 1;

	while (i <= 10)
	{
		for (ch = 'a'; ch <= 'z'; ch++)
			_putchar(ch);
		_putchar('\n');
		i++;
	}
}
