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
    int i = 0;
    int n = strlen(format);
    char *s;
    char *seperator = "";

    
    va_start(args, format);
    while (i < n)
    {
        switch (format[i])
        {
        case 'c':
            {
            char c = va_arg(args, int);

            printf("%s%c", seperator, c);
            }
            break;
        case 'i':
            {
                int j = va_arg(args, int);

                printf("%s%i", seperator, j);
            }
            break;
        case 'f':
            {
                float f = va_arg(args, double);

                printf("%s%f", seperator, f);
            }
            break;
        case 's':
            s = va_arg(args, char*);

            if (!s)
            {
                s = "(nil)";
            }
            printf("%s%s", seperator, s);
            break;
        }
        seperator = ", ";
        i++;
    }
    va_end(args);
    printf("\n");
}
}
