#include "main.h"

/**
 * _atoi - that convert a string to an integer.
 * @s: this is for check output
 * @j: nember for check
 * @p: this nember for check positive number
 * @m: this number for check negative number
 * @r: this is for check resulta
 * Return: return (0) if there are no numbers
*/

int _atoi(char *s)
{
	int len = 0;
	int i, j;
	int p = 0;
	int m = 0;
	int r;

	while (s[len] != '\0')
		len++;
	for (i = 0; i < len; i++)
	{
		if (s[len] == 45)
			m++;
		else
		{
			if (s[len] == 43)
				p++;
		}
		j = i;
		while (s[j] > 47 && s[j] < 58)
		{
			r = (r * 10) + (s[j] - 48);
			j++;
			if (s[j] == '\0' || (s[j] < 47 && s[j] > 58))
			{
				if (m % 2 == 0)
					return r;
				else
					return -r;
			}
		}
	}
	return (0);
}
