#include "main.h"
#include <stdio.h>
#include <string.h>
/**
 * rev_string - that  prints a string, followed by a new line
 * @s:this is for check
*/

void rev_string(char *s)
{
	int i, j;
	int len = 0;
	char c;

	while (s[len] != '\0')
	{
		len++;
	}
	for (i = 0, j = len - 1; j > len / 2; j--, i++)
	{
		c = s[j];
		s[j] = s[i];
		s[i] = c;
	}
}
