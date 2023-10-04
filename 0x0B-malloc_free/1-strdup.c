#include <stdlib.h>
#include "main.h"

/**
 * *_strdup-that returns a pointer to a newly allocated space in memory
 * @str: the input
 *
 * Return: duplicated or NULL
 */

char *_strdup(char *str)
{
	char *dup;
	int itg = 0;
	int sz = 0;

	if (str == 0)
	{
		return (NULL);
	}
	while (str[sz] != '\0')
	{
		sz++;
	}
	dup = malloc(sz * sizeof(*str) + 1);

	if (dup == 0)
	{
		return (NULL);
	}
	else
	{
		for (; itg < sz; itg++)
			dup[itg] = str[itg];
	}
	return (dup);
}
