#ifndef CALC_H
#define CALC_H

#include <stdlib.h>
#include <stdio.h>

/**
 * struct op - Structure defining an operator and its corresponding function.
 *
 * @op: Operator represented as a string (e.g., "+", "-", "*", "/", "%").
 * @f: Function pointer to the corresponding arithmetic operation.
 */
typedef struct op
{
    char *op;
    int (*f)(int a, int b);
} op_t;

/* Function prototypes for arithmetic operations */
int op_add(int a, int b);
int op_sub(int a, int b);
int op_mul(int a, int b);
int op_div(int a, int b);
int op_mod(int a, int b);

/* Function prototype for operator selection */
int (*get_op_func(char *s))(int, int);

#endif /* CALC_H */
