#include "main.h"
#include <stdio.h>

/**
 * *leet - that encodes a string into 1337
 * @str: The string to be modified.
 *
 * Return: return str
*/

char *leet(char *str)
{
	char *ptr = str;
	char alpha[] = {'a', 'A', 'e', 'E', 'o', 'O', 't', 'T', 'l', 'L'};
	int num[] = {4, 4, 3, 3, 0, 0, 7, 7, 1, 1};
	unsigned int k;

	while (*ptr)
	{
		for (k = 0; k < sizeof(alpha) / sizeof(char); k++)
		{
			if (*ptr == alpha[k] || *ptr == alpha[++k])
			{
				*ptr = 48 + num[k];
			}
		}
		ptr++;
	}
	return (str);
}
