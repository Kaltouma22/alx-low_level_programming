#include "main.h"

/**
 * print_binary - Prints the binary representation of a number.
 * @n: The number to convert and print in binary.
 *
 * Description: this function prints the binary representation
 * of a number using bitwise operations.
 */

void print_binary(unsigned long int n)
{
	if (n > 1)
	{
		print_binary(n >> 1);
	}
	_putchar((n & 1) ? '1' : '0');
}
