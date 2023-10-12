#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_strings - Prints strings, followed by a new line.
 * @separator: The string to be printed between the strings.
 * @n: The number of strings passed to the function.
 * @...: The strings to be printed.
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list args;
	unsigned int i;
	char *str;

	va_start(args, n); /* Initialize the argument list. */

	for (i = 0; i < n; i++)
	{
		str = va_arg(args, char *); /* Get the next argument value. */

		if (str != NULL)
			printf("%s", str); /* Print the string. */
		else
			printf("(nil)"); /* Print (nil) if the string is NULL. */

		if (separator != NULL && i < n - 1)
			printf("%s", separator); /* Print the separator if not the last string. */
	}

	va_end(args); /* Clean up the argument list. */

	printf("\n"); /* Print a new line at the end. */
}
