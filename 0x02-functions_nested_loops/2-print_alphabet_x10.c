#include "main.h"

/**
 * print_alphabet - utilizes on the _putchar function to print
 * the alphabet a - z
*/

void print_alphabet_x10(void)
{
	int ch;
	int i=1;
	while(i<=10)
	{
		for (ch = 'a'; ch <= 'z'; ch++)
			_putchar(ch);
		_putchar('\n');
		i++;
	}
}
