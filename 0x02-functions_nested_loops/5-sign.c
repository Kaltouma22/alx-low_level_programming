#include "main.h"

/**
 * print_sign - checks for print the sign numbers.
 *
 * @n: use for check result of function
 *
 * Return: return 1 and print + if n is greater than zero
 * return 0 and print 0 if n is zero
 * return -1 and print - if n is less than zero
*/

int print_sign(int n)
{
        if (n > 0)
	{
		_putchar('+');
		return (1);
	}
        if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	if (n < 0)
	{
                _putchar('-');
		return (-1);
	}
	return (0);
}
