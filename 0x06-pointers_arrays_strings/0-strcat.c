#include "main.h"

/**
 * *_strcat - that concatenates two strings
 *
 * @dest: this is the first string
 * @src: second string
 *
 * Return: return (dest)
*/

char *_strcat(char *dest, char *src)
{
	int a = 0;
	int b = 0;

	while (dest[a])
	{
		a++;
	}
	for (b = 0; src[b] ; b++)
	{
		dest[a++] = src[b];
	}
	return (dest);
}
