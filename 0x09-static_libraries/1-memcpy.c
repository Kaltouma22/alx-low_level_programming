#include "main.h"

/**
 * *_memcpy - that copies memory area
 * @dest: is a pointer to the destination memory
 * @src: is a pointer to the source memory
 * @n: is the number of bytes to copy
 *
 * Return: return dest;
*/

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
