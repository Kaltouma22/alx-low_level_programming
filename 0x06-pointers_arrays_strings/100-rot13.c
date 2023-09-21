#include <stdio.h>
#include "main.h"

/**
 * *rot13 - that encodes a string using rot13
 * @str: The string to be modified.
 *
 * Return: return ptr
*/

char *rot13(char *str)
{
	char *ptr = str;
	char lower[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	char upper[] = "nopqrstuvwxyzabcdefghijklmNOPQRSTUVWXYZABCDEFGHIJKLM";

	int z;

	while (*str)
	{
		for (z = 0; z <= 52; z++)
		{
			if (*str == lower[z])
			{
				*str = upper[z];
				break;
			}
		}
		str++;
	}
	return (ptr);
}
