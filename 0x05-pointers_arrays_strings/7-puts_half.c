#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * puts_half -   that prints half of a string
 * @str: this is for output
*/

void puts_half(char *str)
{
	int i;
	int len = 0;

	while (str[len] != '\0')
		len++;
	if (len % 2 != 0)
	{
		for (i = (len / 2) + 1; i < len; i++)
		{
			putchar(str[i]);
		}
	}
	else
	{
		for (i = len / 2; i < len; i++)
		{
			putchar(str[i]);
		}
	}
	putchar('\n');
}
