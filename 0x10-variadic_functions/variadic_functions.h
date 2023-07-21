#ifndef VARIADIC_FUNCTIONS_H
#define VARIADIC_FUNCTIONS_H

#include <stdarg.h>
#include <stdlib.h>
#include <stdio.h>

int _putchar(char c);

int sum_them_all(const unsigned int n, ...);

void print_numbers(const char *separator, const unsigned int n, ...);

void print_strings(const char *separator, const unsigned int n, ...);

void print_all(const char * const format, ...);

void print_c(const void *);
void print_i(const void *);
void print_f(const void *);
void print_s(const void *);

/**
 * struct op - struct op
 * @frmt: format spicifier
 * @func: corresponding function
*/
typedef struct op
{
	void (*func)(const void *);
	char frmt;
} print_t;

#endif /* #ifndef VARIADIC_FUNCTIONS_H */
