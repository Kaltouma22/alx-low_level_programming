#ifndef CALC_H
#define CALC_H

#include <stdio.h>
#include <stdlib.h>

/**
 * struct op - Struct op
 *
 * @op: The operator
 * @f: The function associated
 */
typedef struct op
{
	char *op;
	int (*f)(int a, int b);
} op_t;

int op_add(int e, int f);
int op_sub(int e, int f);
int op_mul(int e, int f);
int op_div(int e, int f);
int op_mod(int e, int f);

int (*get_op_func(char *s))(int, int);

#endif
