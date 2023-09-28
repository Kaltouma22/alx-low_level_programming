#include "main.h"

int is_prime(int n, int num);

/**
 * is_prime_number - that returns a prime number
 * @n: The prime number to be printed
 * Return: return 1 if the number is prime, 0 otherwise
*/

int is_prime_number(int n)
{
	return (is_prime(n, 2));
}

/**
 * is_prime - that check all prime unmber
 * @n: the prime num
 * @num: intiger
 * Return: return 1 if the number is prime, 0 otherwise
*/

int is_prime(int n, int num)
{
	if (n > 1 && num >= n)
	{
		return (1);
	}
	else if (n % num == 0 || n <= 1)
	{
		return (0);
	}
	else
		return (is_prime(n, num + 1));
}
