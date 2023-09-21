#include "main.h"
#include <stdbool.h>

/**
 * cap_string - Capitalizes all words of a string.
 * @str: The string to be modified.
 *
 * Return: A pointer to the modified string.
 */
char *cap_string(char *str)
{
	char *ptr = str;
	bool new_word = true;

	while (*ptr != '\0')
	{
		if (new_word && (*ptr >= 'a' && *ptr <= 'z'))
		{
			*ptr = *ptr - ('a' - 'A');
			new_word = false;
		}
		else if (*ptr == ' ' || *ptr == '\t' || *ptr == '\n')
		{
			if (*ptr == ',' || *ptr == ';')
			if (*ptr == '.' || *ptr == '!')
			if (*ptr == '?' || *ptr == '"')
			if (*ptr == '(' || *ptr == ')')
			if (*ptr == '{' || *ptr == '}')
		new_word = true;
		}
		else
		{
			new_word = false;
		}
		ptr++;
	}
	return (str);
}

