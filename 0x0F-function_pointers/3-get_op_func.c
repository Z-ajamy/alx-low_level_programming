#include "3-calc.h"

/**
 * get_op_func - Selects the appropriate function based on the operator.
 * @s: The operator passed as an argument.
 *
 * Description:
 * This function compares the input operator with predefined operators
 * and returns the corresponding function pointer. If the operator is
 * invalid, it returns NULL.
 *
 * Return: Pointer to the corresponding function, or NULL if invalid.
 */
int (*get_op_func(char *s))(int, int)
{
    /* Array of structures containing operators and their respective functions */
    op_t ops[] = {
        {"+", op_add},
        {"-", op_sub},
        {"*", op_mul},
        {"/", op_div},
        {"%", op_mod},
        {NULL, NULL} /* Sentinel value indicating end of the array */
    };
    int i;

    i = 0;
    while (ops[i].op)
    {
        /* Compare the first character of the operator */
        if (ops[i].op[0] == s[0])
        {
            return (ops[i].f);
        }
        i++;
    }
    return (NULL);
}
