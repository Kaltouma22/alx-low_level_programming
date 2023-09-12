#include "main.h"

/**
 * main - Entry point
 *
 *i Description: for prints _putchar we used putchar prototype.
 *
 * Return: Alwayz 0 (success)
*/

int main(void)
{
	int ch;
	char str[] = "_putchar";

	for (ch = 0; ch < 8; ch++)
		_putchar(str[ch]);
	_putchar('\n');

	return (0);
}
