#include "main.h"

/**
 * *_strpbrk - that searches a string for any of a set of bytes
 * @s: is a pointer to the string to search
 * @accept: it's a pointer to the string containing charcters
 *
 * Return: return NULL
*/

char *_strpbrk(char *s, char *accept)
{
	char *t;
	int i = 0;
	int j;

	while (s[i] != '\0')
	{
		j = 0;
		while (accept[j] != '\0')
		{
			if (s[i] == accept[j])
			{
				t = &s[i];
				return (t);
			}
			j++;
		}
		i++;
	}
	return (NULL);
}
