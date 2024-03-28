#include "variadic_functions.h"
#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include <string.h>

/**
 * print_all - prints anything
 * @format: list of types of arguments passed to the function
 */
void print_all(const char * const format, ...)
{
	if (format != NULL)
{
	va_list args;
	int i = 0, n = strlen(format);
	char *s, *seperator = "";

	va_start(args, format);
	while (i < n)
	{
		switch (format[i])
		{
		case 'c':
			printf("%s%c", seperator, va_arg(args, int));
			break;
		case 'i':
				printf("%s%i", seperator, va_arg(args, int));
			break;
		case 'f':
				printf("%s%f", seperator, va_arg(args, double));
			break;
		case 's':
			s = va_arg(args, char*);
			if (!s)
				s = "(nil)";
			printf("%s%s", seperator, s);
			break;
		default:
		i++;
		continue;
		}
		seperator = ", ";
		i++;
	}
	va_end(args);
}
	printf("\n");
}
