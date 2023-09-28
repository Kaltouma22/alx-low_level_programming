#include "main.h"
#include <string.h>

/**
 * is_palindrome - that returns 1 if a string is a palindrome and 0 if not.
 * @s: The string to be printed
 * @i: for check if the number is palindrome
 * @e: this is also for check palindrome number
 *
 * Return: return 1 if a string is a palindrome and 0 if not
*/

int isPalRec(char *s, int i, int e);
int is_palindrome(char *s)
{
	int n = strlen(s);

	if (n == 0)
		return (1);

	return (isPalRec(s, 0, n - 1));
}

/**
 * isPalRec - that for recursion
 * @s: the string to be printed
 * @i: for check if the number is palindrome
 * @e: this is also for check palindrome number
 *
 * Return: return isPalRec
*/

int isPalRec(char *s, int i, int e)
{
	if (i == e)
		return (1);
	if (s[i] != s[e])
		return (0);
	if (i < e + 1)
		return (isPalRec(s, i + 1, e - 1));
	return (1);
}
