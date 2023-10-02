#include "main.h"

/**
 * _strlen - that returns the length of a string
 * @s:this is a number for check
 * Return: return length
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
