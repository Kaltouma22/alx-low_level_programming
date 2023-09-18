#include "main.h"

/**
 * int _strlen - that returns the length of a string
 * @_strlen: for check result
 * @s:this is a number for check
*/

int _strlen(char *s)
{
	int length = 0;

	while (s[length] != '\0')
	{
		length++;
	}
	return (length);
}
