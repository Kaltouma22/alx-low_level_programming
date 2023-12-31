#include "function_pointers.h"

/**
 * array_iterator-that executes a function given as a parameter
 * on each element of an array
 * @array: A pointer to an array of integers
 * @size: the size of the array
 * @action: A function pointer representing the
 * action to be executed on each element
 *
 * Return : void
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	int *stp = size + array - 1;

	if (array && size && action)
	{
		for (; array <= stp; array++)
			action(*array);
	}
}
