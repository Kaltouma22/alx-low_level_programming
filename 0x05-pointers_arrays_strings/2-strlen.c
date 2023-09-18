#include "main.h"

/**
 * int _strlen - that returns the length of a string 
 * @str: for check result
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
