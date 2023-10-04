#include <stdlib.h>
#include "main.h"

/**
 * *create_array-that creates an array of chars
 * @size: for check size result
 * @c: is the specified character
 *
 * Return: array or NULL
 */

char *create_array(unsigned int size, char c)
{
	char *arr = malloc(size);

	if (size == 0)
	{
		return (NULL);
	}
	if (arr == NULL)
	{
		return (NULL);
	}
	while (size--)
	{
		arr[size] = c;
	}
	return (arr);
}
