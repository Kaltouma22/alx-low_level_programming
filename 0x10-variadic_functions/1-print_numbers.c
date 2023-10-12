#include "variadic_functions.h"
#include <stdarg.h>

/**
 * print_numbers - that prints numbers, followed by a new line
 * @separator:is the string to be printed between numbers
 * @n:the number of integers passed to the function
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list args;

	unsigned int i;

	va_start(args, n);
	for (i = 0; i < n; i++)
	{
		int num = va_arg(args, int);

		printf("%d", num);
		if (i < n - 1)
		{
			printf("%s", separator);
		}
	}
	printf("\n");
	va_end(args);
}
