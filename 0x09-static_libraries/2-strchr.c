#include "main.h"

/**
 * *_strchr - that locates a character in a string
 * @s: the pointer to the string to locate the character
 * @c: it's the character to find string
 *
 * Return: return NULL
*/

char *_strchr(char *s, char c)
{
	while (*s != '\0')
	{
		if (*s == c)
		{
			return (s);
		}
		s++;
	}
	if (*s == c)
	{
		return (s);
	}
	return (NULL);
}
