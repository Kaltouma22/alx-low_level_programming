#include "main.h"

/**
 * main - Entry point
 *
 * Description: A C program that prints 10 lines alphabet.
 *
 * Return: Alwayz 0 (success)
*/

void print_alphabet_x10(void)
{
	int ch;
	int i = 1;
	while (i <= 10)
	{
		for (ch = 'a'; ch <= 'z'; ch++)
			_putchar(ch);
		_putchar('\n');
		i++;
	}
}
