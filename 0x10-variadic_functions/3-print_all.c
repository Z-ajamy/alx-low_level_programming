#include "variadic_functions.h"

void print_all(const char * const format, ...)
{
    int i = 0;
    char *s;
    char *str = "";
    va_list list;


    if (!format)
    {
        printf("\n");
        va_end(list);
        return;
    }
    va_start(list, format);

    while (format[i])
    {
        switch (format[i])
        {
            case 'c':
                printf("%s%c",str, va_arg(list, int));
            break;
            case 'i':
                printf("%s%d", str, va_arg(list, int));
            break;
            case 's':
                s= va_arg(list, char *);
                if (s)
                {
                    printf("%s%s", str,s);
                    break;
                }
                printf("%s%s",str, "(nil)");
            break;
            case 'f':
                printf("%s%f",str, va_arg(list, double));
            break;
        default:
        i++;
            continue;;
        
}
    str = ", ",
    i++;
    }
    printf("\n");
    va_end(list);
}
