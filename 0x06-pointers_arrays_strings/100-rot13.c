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
	int i;

	while (*str)
	{
		for (i = 0; i <= 52; i++)
		{
			if (*str == lower[i])
			{
				*str = upper[i];
				break;
			}
		}
		str++;
	}
	return (ptr);
}
