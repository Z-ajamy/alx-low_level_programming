#include"variadic_functions.h"
#include<stdarg.h>
#include<stdio.h>

/**
 * print_strings - prints strings
 * @separator: separator between strings
 * @n: number of arguments
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list args;

	va_start(args, n);
	for (i = 0; i < n; i++)
	{
		if (!separator)
		{
			char *s = va_arg(args, char*);

			if (s == NULL)
			{
				s = "nil";
			}

			printf("%s", s);
		}
		else if (separator && i == 0)
		{
			char *s = va_arg(args, char*);

			if (s == NULL)
			{
				s = "nil";
			}
			printf("%s", s);
		}
		else
		{
			char *s = va_arg(args, char*);

			if (s == NULL)
			{
				s = "nil";
			}
			printf("%s%s", separator, s);
		}
	}
	va_end(args);
	printf("\n");
}
