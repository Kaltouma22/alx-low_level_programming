#include "main.h"

/**
 * _strcmp - that compares two strings
 *
 * @s1: this is the first string
 * @s2: second string
 *
 * Return: return (0)
*/

int _strcmp(char *s1, char *s2)
{
	while (*s1 || *s2)
	{
		if (*s1 != *s2)
		{
			return (*s1 - *s2);
		}
		s1++;
		s2++;
	}
	return 0;
}
