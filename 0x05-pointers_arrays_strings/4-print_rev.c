#include "main.h"
#include <stdio.h>

/**
 * print_rev - that  prints a string, followed by a new line
 * @s:this is for check
*/

void print_rev(char *s)
{
	int len = 0;
	int i;

	while (s[len] != '\0')
	{
		len++;
	}
	for (i = len - 1; i >= 0; i--)
	{
		putchar(s[i]);
	}
	putchar('\n');
}
