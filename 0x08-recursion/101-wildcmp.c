#include <stdio.h>
#include <stdbool.h>

/**
 * wildcmp - function compares two strings
 * @s1: for help s2 to contain the special character
 * @s2: here can contain the special character
 *
 * Return: return s1 and s2
*/

bool wildcmp_helper(const char *s1, const char *s2);
int wildcmp(char *s1, char *s2)
{
	return (wildcmp_helper(s1, s2) ? 1 : 0);
}

/**
 * wildcmp_helper - function to do the actual comparison
 * @s1: for help s2 to contain the special character
 * @s2: here can contain the special character
 *
 * Return: return s1 and s2
*/

bool wildcmp_helper(const char *s1, const char *s2)
{
	while (*s1 && *s2)
	{
		if (*s2 == '*')
		{
			while (*s2 == '*')
			{
				s2++;
			}
			if (!*s2)
			{
				return (true);
			}
			while (s1 != s2)
			{
				s1++;
			}
			if (s1 != s2)
			{
				return (false);
			}
			else
			{
				s1++;
				s2++;
			}
		}
		while (*s2 == '*')
		{
			s2++;
		}
		return (!*s1 && !*s2);
	}
	return (1);
}
