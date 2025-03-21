#include<stdarg.h>

#include "variadic_functions.h"

int sum_them_all(const unsigned int n, ...)
{
    int res = 0;
    unsigned int i;
    va_list list;
    va_start(list, n);
    for (i = 0; i < n; i++)
    {
        res += va_arg(list, int);
    }
    va_end(list);
    return res;
    
}
