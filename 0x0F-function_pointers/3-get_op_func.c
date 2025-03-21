#include"3-calc.h"


int (*get_op_func(char *s))(int, int)
{
    op_t ops[] = {
        {"+", op_add},
        {"-", op_sub},
        {"*", op_mul},
        {"/", op_div},
        {"%", op_mod},
        {NULL, NULL}
    };
    int i;

    i = 0;
    while (ops[i].op)
    {
        if (is_equal(ops[i].op, s))
        {
            return ops[i].f;
        }
        i++;
    }
    return NULL;
}


int is_equal(char *s, char *str)
{
    int i = 0;
    if (!s || !str)
    {
        return 0;
    }
    for (i = 0; s[i] != '\0' && str [i] != '\0'; i++)
    {
        if (s[i] != str[i])
        {
            return 0;
        }
    }
    
    if (s[i] == str[i])
    {
        return 1;
    }
    return 0;
}
