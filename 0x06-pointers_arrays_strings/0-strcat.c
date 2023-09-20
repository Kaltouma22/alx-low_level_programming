#include "main.h"

/***/

char *_strcat(char *dest, char *src)
{
	char dest[100] = "Hello, ";
	char src[] = "World";

	_strcat(dest, src);

	puts("%s\n", dest);
}
