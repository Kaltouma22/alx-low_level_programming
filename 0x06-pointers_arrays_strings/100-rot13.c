#include <stdio.h>
#include "main.h"

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
