#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 * print_char - Print a character
 * @args: Argument list
 */
void print_char(va_list args)
{
	printf("%c", va_arg(args, int));
}

/**
 * print_integer - Print an integer
 * @args: Argument list
 */
void print_integer(va_list args)
{
	printf("%d", va_arg(args, int));
}

/**
 * print_float - Print a float
 * @args: Argument list
 */
void print_float(va_list args)
{
	printf("%f", (float) va_arg(args, double));
}

/**
 * print_string - Print a string
 * @args: Argument list
 */
void print_string(va_list args)
{
	char *str = va_arg(args, char *);

	if (str == NULL)
		str = "(nil)";
	printf("%s", str);
}

/**
 * print_all - Print all arguments based on the format string
 * @format: List of types of arguments
 */
void print_all(const char * const format, ...)
{
	va_list args;
	unsigned int i = 0, j;
	char *sep = "";

	form_t forms[] = {
		{'c', print_char},
		{'i', print_integer},
		{'f', print_float},
		{'s', print_string},
		{'\0', NULL}
	};

	va_start(args, format);
	while (format && format[i])
	{
		j = 0;
		while (forms[j].specifier)
		{
			if (format[i] == forms[j].specifier)
			{
				printf("%s", sep);
				forms[j].func(args);
				sep = ", ";
				break;
			}
			j++;
		}
		i++;
	}
	printf("\n");
	va_end(args);
}

