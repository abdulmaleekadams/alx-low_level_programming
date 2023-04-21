#ifndef VARIADIC_FUCTIONS_H
#define VARIADIC_FUNCTIONS_H

#include <stdarg.h>

/**
 * struct format_t - struct to map a format specifier to a function
 * @c: format specifier
 * @f: corresponding function
 */
typedef struct format_t
{
	char c;
	void (*f)(va_list);
} format_t;

int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_all(const char * const format, ...);

#endif
