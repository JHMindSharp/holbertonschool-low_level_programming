#include "variadic_functions.h"
#include <stdio.h>

/**
 * print_char - Prints a character from va_list
 * @list: va_list to print from
 */
void print_char(va_list list)
{
	printf("%c", va_arg(list, int));
}

/**
 * print_int - Prints an integer from va_list
 * @list: va_list to print from
 */
void print_int(va_list list)
{
	printf("%d", va_arg(list, int));
}

/**
 * print_float - Prints a float from va_list
 * @list: va_list to print from
 */
void print_float(va_list list)
{
	printf("%f", (float)va_arg(list, double));
}

/**
 * print_string - Prints a string from va_list
 * @list: va_list to print from
 */
void print_string(va_list list)
{
	char *str = va_arg(list, char *);

	if (str == NULL)
		printf("(nil)");
	else
		printf("%s", str);
}

/**
 * print_all - Prints various types given a format string for the arguments
 * @format: String containing type information for args
 */
void print_all(const char * const format, ...)
{
	va_list args;
	int i = 0;
	int j = 0;
	char *separator = "";
	char *types = "cifs";
	void (*print_fn[4])(va_list) = {print_char, print_int, print_float,
		print_string};

	va_start(args, format);
	while (format && format[i])
	{
		j = 0;
		while (types[j])
		{
			if (types[j] == format[i])
			{
				printf("%s", separator);
				print_fn[j](args);
				separator = ", ";
			}
			j++;
		}
		i++;
	}
	printf("\n");
	va_end(args);
}

