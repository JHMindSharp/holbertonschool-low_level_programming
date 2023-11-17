#include <stdarg.h>
#include <stdio.h>

/**
 * print_all - Prints values based on the provided format string
 * @format: A string containing the types of arguments passed
 *          c: char
 *          i: integer
 *          f: float
 *          s: char* (if the string is NULL, print (nil) instead)
 */
void print_all(const char * const format, ...)
{
	va_list args;
	int i = 0;
	char *str;
	char c;
	float f;

	va_start(args, format);

	while (format && format[i])
	{
		switch (format[i])
		{
			case 'c':
				c = va_arg(args, int);
				printf("%c", c);
				break;
			case 'i':
				i = va_arg(args, int);
				printf("%d", i);
				break;
			case 'f':
				f = va_arg(args, double);
				printf("%f", f);
				break;
			case 's':
				str = va_arg(args, char *);
				if (str == NULL)
					printf("(nil)");
				else
					printf("%s", str);
				break;
		}
		if (format[i + 1] && (format[i + 1] == 'c' || format[i + 1] == 'i' ||
					format[i + 1] == 'f' || format[i + 1] == 's'))
			printf(", ");
		i++;
	}

	va_end(args);
	printf("\n");
}

