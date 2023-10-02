#include "main.h"

/**
 * _isdigit - checks for digit.
 *
 * @c: use for check result of function
 *
 * Return: return 1 for `c` is a digit
 * otherwise always 0
*/

int _isdigit(int c)
{
	if (c > 47 && c < 58)
		return (1);
	else
		return (0);
}
