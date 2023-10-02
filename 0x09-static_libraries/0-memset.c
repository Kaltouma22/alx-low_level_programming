#include "main.h"

/**
 * *_memset - that fills memory with a constant byte
 * @s: is a pointer to the memory
 * @b: is the constant byte
 * @n: is the number of byte to fille
 * Return: return s
*/

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}
	return (s);
}
