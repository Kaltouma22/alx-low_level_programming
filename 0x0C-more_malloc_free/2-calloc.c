#include "main.h"

char *_memset(char *p, char v, unsigned int n);
/**
 * *_calloc - function that allocates memory for an array
 * @nmemb: that represents the number of elements
 * @size: that specifies the size
 * Return: return ptr
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *mlc;

	if (size == 0 || nmemb == 0)
	{
		return (NULL);
	}
	mlc = malloc(nmemb * sizeof(int));

	if (mlc == NULL)
		return (NULL);

	_memset(mlc, 0, nmemb * sizeof(int));

	return (mlc);
}

/**
 * _memset - It is designed to set a specified number of bytes
 * @p: A pointer to the memory area to be filled
 * @v: The value to be set
 * @n: The number of bytes
 * Return: return str
 */

char *_memset(char *p, char v, unsigned int n)
{
	char *str = p;

	while (n--)
		*p++ = v;

	return (str);
}
