#include "main.h"

/**
 * *_strstr -  that locates a substring
 * @haystack: is a pointer to the string to search
 * @needle: is a pointer to the substring to locate
 *
 * Return: return NULL
*/

char *_strstr(char *haystack, char *needle)
{
	char *h, *n;

	while (*haystack)
	{
		h = haystack;
		n = needle;
		while (*n && *h == *n)
		{
			h++;
			n++;
		}

		if (*n == '\0')
		{
			return (haystack);
		}
		haystack++;
	}
	return (NULL);
}
