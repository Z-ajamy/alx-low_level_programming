#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_all - Prints anything based on the provided format.
 * @format: A list of types of arguments passed to the function.
 * @...: The values to be printed.
 */
void print_all(const char * const format, ...)
{
	va_list args;
	unsigned int i = 0;
	char *str;
	int num;
	float num_float;
	char *separator = "";

	va_start(args, format); /* Initialize the argument list. */

	while (format && format[i])
	{
		if (i > 0 && (format[i] == 'c' || format[i] == 'i' || format[i] == 'f' || format[i] == 's'))
			printf(", ");

		switch (format[i])
		{
			case 'c':
				num = va_arg(args, int);
				printf("%s%c", separator, num);
				break;
			case 'i':
				num = va_arg(args, int);
				printf("%s%d", separator, num);
				break;
			case 'f':
				num_float = va_arg(args, double);
				printf("%s%f", separator, num_float);
				break;
			case 's':
				str = va_arg(args, char *);
				if (str == NULL)
					str = "(nil)";
				printf("%s%s", separator, str);
				break;
		}
		separator = "";
		i++;
	}

	va_end(args); /* Clean up the argument list. */

	printf("\n"); /* Print a new line at the end. */
}
