#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * _strcpy - that copies the string pointed
 * Description: this function copies the string pointed to by src
 * @dest: this is for output
 * @src: for check resulta
*/

char *_strcpy(char *dest, char *src)
{
	int i = -1;

	do {
		i++;
		dest[i] = src[i];
	}while (src[i] != '\0');
	
	return (dest);
}
