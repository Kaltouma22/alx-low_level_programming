#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * *_strcpy - that copies the string pointed by src
 * Description: this function for copies the string pointed to by src
 * @dest: this is for output
 * @src: for check resulta
 * Return : return dest
*/

char *_strcpy(char *dest, char *src)
{
	int i = -1;

	do {
		i++;
		dest[i] = src[i];
	} while (src[i] != '\0');
	
	return (dest);
}
