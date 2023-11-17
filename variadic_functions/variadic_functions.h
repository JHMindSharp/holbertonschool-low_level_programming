#ifndef VARIADIC_FUNCTIONS_H
#define VARIADIC_FUNCTIONS_H

#include <stdarg.h>

typedef struct funckey {
	void (*f)(va_list);
	char spec;
} funckey;

void print_all(const char * const format, ...);
void printf_char(va_list list);
void printf_int(va_list list);
void printf_float(va_list list);
void printf_string(va_list list);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
int sum_them_all(const unsigned int n, ...);

#endif /* VARIADIC_FUNCTIONS_H */
