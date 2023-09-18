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
	char c;

	for (i = 0, j = 8; j>4; j--, i++)
	{
		c = s[j];
		s[j] = s[i];
		s[i] = c;
	}
}
