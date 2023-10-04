#include <stdlib.h>
#include "main.h"

int _strlen(char *s);
/**
 * *str_concat-that concatenates two strings
 * @s1: string 1 for calculate the length
 * @s2: string 2 for calculate the length
 * Return: c
 */

char *str_concat(char *s1, char *s2)
{
	int i1, j2, k;
	char *c;

	if (s1 == 0 || s2 == 0)
	{
		return (NULL);
	}

	i1 = _strlen(s1);
	j2 = _strlen(s2);
	c = malloc((i1 + j2) * sizeof(char) + 1);

	if (c == 0)
		return (NULL);
	for (k = 0; k <= i1 + j2; k++)
	{
		if (k < i1)
			c[k] = s1[k];
		else
			c[k] = s2[k - i1];
	}
	c[k] = '\0';
	return (c);
}

/**
 * _strlen-that find a length of a string
 * @s: string
 * Return: return sz
 */

int _strlen(char *s)
{
	int sz = 0;

	while (s[sz] != '\0')
	{
		sz++;
	}
	return (sz);
}
