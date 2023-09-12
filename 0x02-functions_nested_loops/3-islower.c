#include "main.h"

/**
 * int _islower(int c) - checks for lowercase character.
*/

int _islower(int c)
{
	if (c > 96 && c < 123)
		return (1);
	else
		return (0);

}
