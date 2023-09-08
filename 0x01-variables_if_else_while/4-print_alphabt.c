#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: A C program that prints all alphabet.
 *
 * Return: Alwayz 0 (success)
*/

int main(void)
{
	char alphabet[] = "abcdefghijklmnopqrstuvwxyz";
	int i;
	for (i = 0; alphabet[i] != '\0'; i++)
	{
		if (alphabet[i] != 'e' && alphabet[i] != 'q')
			putchar(alphabet[i]);
	}
	putchar('\n');
	return (0);
}
