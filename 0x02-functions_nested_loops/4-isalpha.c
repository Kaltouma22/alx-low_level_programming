#include "main.h"

/**
 * _isalpha - checks for uppercase character.
 *
 * @c: use for check result of function
 *
 * Return: return 1 for `c` is lowercase or uppercase
 * otherwise always 0
*/

int _isalpha(int c)
{
	if (c > 96 && c < 123)
		return (1);
	if (c > 64 && c < 91)
		return (1);
	return (0);
}
