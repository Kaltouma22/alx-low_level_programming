#include "main.h"

/**
 * *array_range - function that creates an array of integers
 * @min: The minimum value for the range of integers
 * @max: The maximum value for the range of integers
 * Return: return result
 */

int *array_range(int min, int max)
{
	int i;
	int *result;

	if (min > max)
	{
		return (NULL);
	}
	result = malloc((max - min + 1) * sizeof(int));
	if (result == NULL)
	{
		return (NULL);
	}
	for (i = min; i <= max; i++)
	{
		result[i - min] = i;
	}
	return (result);
}
