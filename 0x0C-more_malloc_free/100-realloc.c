#include "main.h"
#include <string.h>

/**
 * *_realloc - that reallocates a memory block using malloc and free
 * @ptr: A pointer to the previously allocated memory
 * @old_size: The current size of the memory
 * @new_size: The new size for the reallocated
 * Return: return m
 */

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	void *m;
	unsigned int c = (old_size < new_size) ? old_size : new_size;

	if (new_size == 0)
	{
		free(ptr);
		return (NULL);
	}
	m = malloc(new_size);
	if (!m)
	{
		return (NULL);
	}
	if (ptr)
	{
		memcpy(m, ptr, c);
		free(ptr);
	}
	return (m);
}
