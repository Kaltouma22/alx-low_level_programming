#include "main.h"

/**
 * print_last_digit - checks for computes the last digit
 *
 * @n: use for check result of function
 *
 * Return: Alwayz 0
*/

int print_last_digit(int n)
{
	int m = (n % 10);

	if (n >= 0)
	{
		_putchar('0' + m);
		return (m);
	}
	else
	{
		_putchar('0' - m);
		return (-m);
	}
	return (0);
}
