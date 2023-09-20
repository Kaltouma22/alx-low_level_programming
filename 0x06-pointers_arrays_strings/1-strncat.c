#include "main.h"

/**
 * *_strncat - that concatenates two strings
 *
 * @dest: this is the first string
 * @src: second string
 * @n: this is for bytes
 *
 * Return: return (dest)
*/

char *_strncat(char *dest, char *src, int n)
{
	int k = 0;
	int z = 0;

	while (dest[k])
		k++;
	while (z < n && src[z])
	{
		dest[k + z] = src[z];
		z++;
	}
	return (dest);
}
