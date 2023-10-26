#include "main.h"

/**
 * clear_bit - That sets the value of a bit to 0 at a given index.
 * @n: Is a pointer to the unsigned long integer to be set the bit.
 * @index: Is a index of the bit to be set (start from 0)
 *
 * Return: 1 if it worked, or -1 if an error occurred
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	*n = *n & ~(1UL << index);

	if (index >= sizeof(unsigned long int) * 8)
	{
		return (-1);
	}

	return (1);
}
