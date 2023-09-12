#include "main.h"

/**
 *  _abs - checks for computes the absolute value.
 *
 * @n: use for check result of function
 *
 * Return: return n if n greater or equal 0
 * return -n if n less than 0
*/

int _abs(int n)
{
	if (n >= 0)
	{
		return (n);
	}
	if (n < 0)
	{
		return (-n);
	}
	return (0);
}
