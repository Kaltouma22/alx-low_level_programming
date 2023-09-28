#include "main.h"
#include <string.h>

/**
 * is_palindrome - that returns 1 if a string is a palindrome and 0 if not.
 * @s: The string to be printed
 *
 * Return: return 1 if a string is a palindrome and 0 if not
*/

int is_palindrome(char *s)
{
	int len = strlen(s);
	int i, j;

	for (i = 0, j = len - 1; i < j; i++, j--)
	{
		if (s[i] != s[j])
		{
			return (0);
		}
	}
	return (1);
}
