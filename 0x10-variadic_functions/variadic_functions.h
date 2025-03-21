#ifndef VARIADIC_FUNCTIONS_H
#define VARIADIC_FUNCTIONS_H

#include <stdio.h>
#include <stdarg.h>

/**
 * sum_them_all - Computes the sum of all its parameters.
 * @n: The number of arguments.
 * @...: A variable number of arguments to sum.
 *
 * Return: The sum of all parameters, or 0 if n == 0.
 */
int sum_them_all(const unsigned int n, ...);

/**
 * print_numbers - Prints numbers followed by a new line.
 * @separator: The string to separate numbers.
 * @n: The number of arguments.
 * @...: The numbers to be printed.
 *
 * Description: If separator is NULL, it will not be printed.
 */
void print_numbers(const char *separator, const unsigned int n, ...);

/**
 * print_strings - Prints strings followed by a new line.
 * @separator: The string to separate strings.
 * @n: The number of arguments.
 * @...: The strings to be printed.
 *
 * Description: If a string is NULL, it prints "(nil)" instead.
 *              If separator is NULL, it will not be printed.
 */
void print_strings(const char *separator, const unsigned int n, ...);

/**
 * print_all - Prints anything based on the given format.
 * @format: A list of types of arguments passed to the function.
 * @...: The arguments to be printed.
 *
 * Description: The format can contain:
 *              - 'c' for char
 *              - 'i' for int
 *              - 'f' for float
 *              - 's' for string (if NULL, prints "(nil)")
 */
void print_all(const char * const format, ...);

#endif /* VARIADIC_FUNCTIONS_H */
