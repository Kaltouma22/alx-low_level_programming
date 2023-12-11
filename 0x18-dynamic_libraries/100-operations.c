#include <stdio.h>

/* Addition function */
int add(int a, int b)
{
	return (a + b);
}

/* Subtraction function */
int sub(int a, int b)
{
	return a - b;
}

/* Multiplication function */
int mul(int a, int b)
{
	return a * b;
}

/* Division function */
int divide(int a, int b)
{
	if (b == 0)
	{
		printf("Error: Division by zero\n");
		return (0);
	}
	return (a / b);
}

/* Modulus function */
int mod(int a, int b)
{
	if (b != 0)
	{
		return (a % b);
	}
	else
	{
		printf("Error: Modulus by zero\n");
		return (0);
	}
}
