#include "variadic_functions.h"
#include <stdarg.h>

/**
 * sum_them_all - that returns the sum of all its parameters
 * @n: int
 *
 * Return: return 0
 */

int sum_them_all(const unsigned int n, ...)
{
	int sum = 0;
	unsigned int i;

	va_list args;

	va_start(args, n);

	if (n == 0)
	{
		return (0);
	}
	for (i = 0; i < n; i++)
	{
		int value = va_arg(args, int);

		sum += value;
	}
	va_end(args);
	return (sum);
}
