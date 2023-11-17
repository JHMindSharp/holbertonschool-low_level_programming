#include "variadic_functions.h"
#include <stdio.h>

/**
 * print_char - Prints a character from va_list
 * @args: va_list to print from
 */
void print_char(va_list args)
{
	printf("%c", va_arg(args, int));
}

/**
 * print_int - Prints an integer from va_list
 * @args: va_list to print from
 */
void print_int(va_list args)
{
	printf("%d", va_arg(args, int));
}

/**
 * print_float - Prints a float from va_list
 * @args: va_list to print from
 */
void print_float(va_list args)
{
	printf("%f", (float)va_arg(args, double));
}

/**
 * print_string - Prints a string from va_list
 * @args: va_list to print from
 */
void print_string(va_list args)
{
	char *str = va_arg(args, char *);

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
	int printed = 0;
	char *sep = "";
	char *types = "cifs";
	void (*print_fn[4])(va_list) = {print_char, print_int,
		print_float, print_string};

	va_start(args, format);
	while (format && format[i])
	{
		int j = 0;

		while (types[j])
		{
			if (format[i] == types[j])
			{
				printf("%s", sep);
				print_fn[j](args);
				sep = ", ";
				printed = 1;
			}
			j++;
		}
		i++;
	}
	va_end(args);
	if (!printed)
		printf("\n");
	else
		printf("\n");
}

