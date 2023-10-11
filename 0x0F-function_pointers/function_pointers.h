#ifndef _FUNCTION_POINTERS_H
#define _FUNCTION_POINTERS_H

#include <stddef.h>

typedef int (*BinaryFunction)(int, int);

int applyBinaryFunction(int a, int b, BinaryFunction function);
void print_name(char *name, void (*f)(char *));
void array_iterator(int *array, size_t size, void (*action)(int));

#endif
