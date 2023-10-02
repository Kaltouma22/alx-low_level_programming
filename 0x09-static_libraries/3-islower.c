#include "main.h"

/**
 * _islower - checks for lowercase character.
 *
 * @c: use for check result of function
 *
 * Return: return 1 for `c` is lowercase
 * otherwise always 0
*/

int _islower(int c)
{
	if (c > 96 && c < 123)
		return (1);
	else
		return (0);

}
