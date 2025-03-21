#include "variadic_functions.h"

/**
 * print_strings - Prints strings followed by a new line.
 * @separator: The string to be printed between the strings.
 * @n: The number of strings passed to the function.
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	char *a;
	unsigned int i;
	va_list list;

	va_start(list, n);

	for (i = 0; i < n; i++)
	{
		a = va_arg(list, char *);

		if (a)
			printf("%s", a);
		else
			printf("%s", "(nil)");

		if (separator && i < n - 1)
			printf("%s", separator);
	}

	va_end(list);
	printf("\n");
}
