#include "main.h"
#include <stdlib.h>

/**
 * *malloc_checked-a function that allocates memory using malloc
 * @b: is integer
 *
 * Return: return ptr or NULL
 */

void *malloc_checked(unsigned int b)
{
	void *ptr = malloc(b);

	if (ptr == NULL)
		exit(98);

	return (ptr);
}
