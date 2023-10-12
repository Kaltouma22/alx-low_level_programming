#ifndef _VARIADIC_FUNCTION_H
#define _VARIADIC_FUNCTION_H

#include <stdio.h>
#include <stdarg.h>

/**
 * struct token - that categorizes the token's role
 * @token: a character
 * @f: a function
 */

typedef struct token
{
	char *token;
	void (*f)(char *, va_list);
} token_t;

int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_all(const char * const format, ...);

#endif
