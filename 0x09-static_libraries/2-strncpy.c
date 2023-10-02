#include "main.h"

/**
 * *_strncpy - that copies a string
 *
 * @dest: this is the first string
 * @src: second string
 * @n: for bytes
 *
 * Return: return (dest)
*/

char *_strncpy(char *dest, char *src, int n)
{
	int a = 0;

	while (a < n && src[a] != '\0')
	{
		dest[a] = src[a];
		a++;
	}
	while (a < n)
	{
		dest[a] = '\0';
		a++;
	}

	return (dest);
}
