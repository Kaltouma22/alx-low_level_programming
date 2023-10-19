#include "main.h"
#include <string.h>

/**
 * _strlen - Calculate the length of a string.
 * @s: A pointer to a string.
 *
 * This function calculates the length of
 * the string pointed to by @s.
 *
 * Return: The length of the string (number of characters).
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
