#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * printf_char - printfs a char from var args
 *
 * @list: va_list to print from
 *
 * Return: void
 */
void printf_char(va_list list)
{
	printf("%c", (char)va_arg(list, int));
}

/**
 * printf_int - printfs an int from var args
 *
 * @list: va_list to print from
 *
 * Return: void
 */
void printf_int(va_list list)
{
	printf("%d", va_arg(list, int));
}

/**
 * printf_float - printfs a float from var args
 *
 * @list: va_list to print from
 *
 * Return: void
 */
void printf_float(va_list list)
{
	printf("%f", (float)va_arg(list, double));
}

/**
 * printf_string - printfs a string from var args
 *
 * @list: va_list to print from
 *
 * Return: void
 */
void printf_string(va_list list)
{
	char *str = va_arg(list, char*);

	if (str == NULL)
		printf("(nil)");
	else
		printf("%s", str);
}

/**
 * print_all - prints various types given a format string for the arguments
 *
 * @format: string containing type information for args
 *
 * Return: void
 */
void print_all(const char * const format, ...)
{
	const char *ptr;
	va_list list;
	funckey key[4] = {
		{ 'c', printf_char },
		{ 'i', printf_int },
		{ 'f', printf_float },
		{ 's', printf_string }
	};
	int i, notfirst = 0;

	ptr = format;
	va_start(list, format);

	while (format != NULL && *ptr)
	{
		i = 0;
		while (i < 4)
		{
			if (key[i].spec == *ptr)
			{
				if (notfirst)
					printf(", ");
				notfirst = 1;
				key[i].f(list);
				break;
			}
			i++;
		}
		ptr++;
	}

	printf("\n");
	va_end(list);
}

/* Add other function implementations below */

