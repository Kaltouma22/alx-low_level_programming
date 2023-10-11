#include "function_pointers.h"

/**
 * int_index-a function that searches for an integer
 * @array: A pointer to an array of integers in which
 * the search will be performed.
 * @size: The size of the array
 * @cmp: A function pointer representing the comparison function
 * Return: return -1
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]))
		{
			return (i);
		}
	}
	if (size <= 0)
	{
		return (-1);
	}
	return (-1);
}
