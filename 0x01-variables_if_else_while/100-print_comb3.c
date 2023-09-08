#include <stdio.h>

/**
 * main - Entry point
 *
 *i Description: A C program that prints all possible different combination.
 *
 * Return: Alwayz 0 (success)
*/

int main(void)
{
	int (i);
	int (j);
	for (i = 0; i <= 9; i++)
	{
		for (j = 0; j <= 9; j++)
		{	
			if (i != j && i < j)
			{
				putchar(48 + i);
				putchar(48 + j);
				if (i + j != 17)
				{	
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
