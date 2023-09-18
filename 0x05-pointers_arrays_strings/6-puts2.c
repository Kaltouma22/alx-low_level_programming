#include "main.h"

/**
 * puts2 -  that prints every other character of a string
 * @str: this is for output
*/

void puts2(char *str)
{
	int i;
	int len = 0;

	while (str[len] != '\0')
		len++;
	for (i = 0; i < len; i = i + 2)
	{
		putchar(str[i]);
	}
	putchar('\n');
}
