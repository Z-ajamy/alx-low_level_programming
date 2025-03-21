#include "3-calc.h"

/**
 * op_add - Adds two integers.
 * @a: First integer.
 * @b: Second integer.
 *
 * Description:
 * This function takes two integers and returns their sum.
 *
 * Return: Sum of a and b.
 */
int op_add(int a, int b)
{
    return (a + b);
}

/**
 * op_sub - Subtracts one integer from another.
 * @a: First integer.
 * @b: Second integer.
 *
 * Description:
 * This function subtracts b from a and returns the result.
 *
 * Return: Difference of a and b.
 */
int op_sub(int a, int b)
{
    return (a - b);
}

/**
 * op_mul - Multiplies two integers.
 * @a: First integer.
 * @b: Second integer.
 *
 * Description:
 * This function multiplies two integers and returns the product.
 *
 * Return: Product of a and b.
 */
int op_mul(int a, int b)
{
    return (a * b);
}

/**
 * op_div - Divides one integer by another.
 * @a: First integer (dividend).
 * @b: Second integer (divisor).
 *
 * Description:
 * This function performs integer division of a by b.
 * If b is zero, an error will occur at the calling function.
 *
 * Return: Quotient of a divided by b.
 */
int op_div(int a, int b)
{
    return (a / b);
}

/**
 * op_mod - Computes the remainder of the division of two integers.
 * @a: First integer (dividend).
 * @b: Second integer (divisor).
 *
 * Description:
 * This function returns the remainder when a is divided by b.
 * If b is zero, an error will occur at the calling function.
 *
 * Return: Remainder of a divided by b.
 */
int op_mod(int a, int b)
{
    return (a % b);
}
