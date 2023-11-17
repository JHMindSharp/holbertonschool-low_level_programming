#include <stdio.h>
#include <stdarg.h>
#include "variadic_function.h"

/**
 * print_all - prints anything based on the format provided
 * @format: list of types of arguments passed to the function
 *          c: char
 *          i: integer
 *          f: float
 *          s: char * (if the string is NULL, print (nil) instead
 *
 * Return: void
 */
void print_all(const char * const format, ...)
{
	va_list args;
	int i = 0;
	char *str;
	char c;

	va_start(args, format);

	while (format && format[i])
	{
		if (format[i] == 'c')
		{
			c = va_arg(args, int);
			printf("%c", c);
		}
		else if (format[i] == 'i')
		{
			int integer = va_arg(args, int);

			printf("%d", integer);
		}
		else if (format[i] == 'f')
		{
			double dbl = va_arg(args, double);

			printf("%f", dbl);
		}
		else if (format[i] == 's')
		{
			str = va_arg(args, char *);
			if (str == NULL)
				printf("(nil)");
			else
				printf("%s", str);
		}

		i++;
	}

	printf("\n");
	va_end(args);
}

