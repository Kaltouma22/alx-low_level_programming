#include "main.h"

/**
 * _isupper - checks for uppercase character.
 *
 * @c: use for check result of function
 *
 * Return: return 1 for `c` is uppercase
 * otherwise always 0
*/

int _isupper(int c)
{
	if (c > 64 && c < 91)
		return (1);
	else
		return (0);
}
