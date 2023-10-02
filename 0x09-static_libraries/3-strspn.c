#include "main.h"
#include <string.h>

/**
 * _strspn - that gets the length of a prefix substring
 * @s: it's a pointer to the string to search
 * @accept: is a pointer to the string containing character
 *
 * Return: return count
*/

unsigned int _strspn(char *s, char *accept)
{
	unsigned int count = 0;

	while (*s != '\0' && strchr(accept, *s) != NULL)
	{
		count++;
		s++;
	}
	return (count);
}
