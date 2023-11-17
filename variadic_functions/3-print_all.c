#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_char - Print a character
 * @separator: Separator to be printed before the character
 * @c: Character to print
 */
void print_char(const char *separator, char c)
{
	printf("%s%c", separator, c);
}

/**
 * print_int - Print an integer
 * @separator: Separator to be printed before the integer
 * @num: Integer to print
 */
void print_int(const char *separator, int num)
{
	printf("%s%d", separator, num);
}

/**
 * print_float - Print a float
 * @separator: Separator to be printed before the float
 * @f: Float to print
 */
void print_float(const char *separator, float f)
{
	printf("%s%f", separator, f);
}

/**
 * print_string - Print a string or (nil) if NULL
 * @separator: Separator to be printed before the string
 * @str: String to print
 */
void print_string(const char *separator, char *str)
{
	if (str == NULL)
		printf("%s(nil)", separator);
	else
		printf("%s%s", separator, str);
}

/**
 * print_all - Prints anything based on the format provided
 * @format: List of types of arguments passed to the function
 */
void print_all(const char * const format, ...)
{
	va_list args;
	unsigned int i = 0;
	char *separator = "";

	va_start(args, format);

	while (format && format[i])
	{
		switch (format[i])
		{
			case 'c':
				print_char(separator, va_arg(args, int));
				break;
			case 'i':
				print_int(separator, va_arg(args, int));
				break;
			case 'f':
				print_float(separator, (float)va_arg(args, double));
				break;
			case 's':
				print_string(separator, va_arg(args, char *));
				break;
			default:
				i++;
				continue;
		}

		separator = ", ";
		i++;
	}

	printf("\n");
	va_end(args);
}

