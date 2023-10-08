#include "main.h"
#include <stdio.h>

/**
 * string_nconcat - concatenates two strings.
 * @s1: first input string
 * @s2: second input string
 * @n: the number of bytes
 *
 * Return: return mlc
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *mlc;
	unsigned int a, b, len1, len2;

	len1 = 0;
	len2 = 0;
	a = 0;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	while (s1[len1] != '\0')
		len1++;
	while (s2[len2] != '\0')
		len2++;
	mlc = malloc(len1 + n + 1);
	if (mlc == NULL)
	{
		return (NULL);
	}
	while (s1[a] != '\0')
	{
		mlc[a] = s1[a];
		a++;
	}
	for (b = 0; b < n; b++)
	{
		mlc[a] = s2[b];
		a++;
	}
	mlc[a] = '\0';
	return (mlc);
}
