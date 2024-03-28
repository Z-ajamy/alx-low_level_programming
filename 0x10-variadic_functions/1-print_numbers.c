#include"variadic_functions.h"
#include<stdarg.h>
#include<stdio.h>
/**
 * print_numbers - prints numbers given as parameters
 * @separator: string to be printed between numbers
 * @n: number of integers passed to the function
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
    unsigned int i;
    va_list args;

    va_start(args, n);
    if (separator != NULL)
    {
        for (i = 0; i < (n - 1); i++)
    {
        printf("%d%s",va_arg(args, int), separator);
    }
    printf("%d\n",va_arg(args, int));
    va_end(args);
    }
}
