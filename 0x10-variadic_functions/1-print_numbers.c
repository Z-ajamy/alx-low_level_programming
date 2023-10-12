#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_numbers - Prints numbers, followed by a new line.
 * @separator: The string to be printed between numbers.
 * @n: The number of integers passed to the function.
 * @...: The integers to be printed.
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list args;
	unsigned int i;

	va_start(args, n); /* Initialize the argument list. */

	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(args, int)); /* Get the next argument value. */

		if (separator != NULL && i < n - 1)
			printf("%s", separator); /* Print the separator if not the last number. */
	}

	va_end(args); /* Clean up the argument list. */

	printf("\n"); /* Print a new line at the end. */
}
