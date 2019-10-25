#ifndef VARIADIC_F
#define VARIADIC_F

#include <stdlib.h>
#include <stdio.h>
#include <stdarg.h>

typedef struct op
{
	char *op;
	int (*f)(int a, int b);
} op_t;

int _putchar(char c);
int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_all(const char * const format, ...);
#endif
