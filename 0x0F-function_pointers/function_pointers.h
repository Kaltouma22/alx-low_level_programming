#ifndef _FUNCTION_POINTERS_H
#define _FUNCTION_POINTERS_H

typedef int (*BinaryFunction)(int, int);

int applyBinaryFunction(int a, int b, BinaryFunction function);
void print_name(char *name, void (*f)(char *));

#endif
