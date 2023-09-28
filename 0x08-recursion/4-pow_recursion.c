#include "main.h"

/**
 * _pow_recursion - that returns the value of x raised to the power of y
 * @x: the base
 * @y: the exponent
 *
 * Return: return result of x^y
*/

int _pow_recursion(int x, int y)
{
	if (y == 0)
	{
		return (1);
	}
	if (y == 1)
	{
		return (x);
	}
	if (y < 0)
	{
		return (-1);
	}
	return (x * _pow_recursion(x, y - 1));
}
