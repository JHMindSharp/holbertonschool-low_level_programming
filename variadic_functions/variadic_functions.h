#ifndef VARIADIC_FUNCTIONS_H
#define VARIADIC_FUNCTIONS_H

#include <stdarg.h>
/**
 * struct form - Associates a specifier with a corresponding printing function
 * @specifier: The specifier character ('c', 'i', 'f', 's')
 * @func: The function pointer to the appropriate printing function
 *
 * Description: This structure holds a specifier character and a
 * function pointer.
 *              It associates each specifier with its corresponding
 *              printing function.
 */
typedef struct form
{
	char specifier;
	void (*func)(va_list);
} form_t;


void print_all(const char * const format, ...);
void printf_char(va_list list);
void printf_int(va_list list);
void printf_float(va_list list);
void printf_string(va_list list);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
int sum_them_all(const unsigned int n, ...);

#endif /* VARIADIC_FUNCTIONS_H */
