#include "main.h"

/**
 * get_bit - Returns the value of a bit at a given index.
 * @n: The unsigned long integer from which to extract the bit.
 * @index: The index of the bit to get (start from 0)
 *
 * Return: - 1 if an error occurs, or
 * The value of the bit at the specified index (0 or 1)
 */

int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int mask = 1UL << index;

	if (index >= sizeof(unsigned long int) * 8)
	{
		return (-1);
	}
	return ((n & mask) ? 1 : 0);
}
