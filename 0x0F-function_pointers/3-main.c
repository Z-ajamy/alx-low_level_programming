#include "3-calc.h"

/**
 * main - Entry point of the program.
 * @argc: Argument count (number of command-line arguments).
 * @argv: Argument vector (array of command-line arguments).
 *
 * Description:
 * This program serves as a simple calculator. It takes three command-line
 * arguments: an integer, an operator, and another integer. It then performs
 * the specified arithmetic operation and prints the result.
 *
 * Return: Always 0 (Success). Exits with error codes if invalid input.
 */
int main(int argc, char *argv[])
{
    int num1, num2; /* Operands */
    int res;        /* Result of the operation */
    char *sec_op;   /* Pointer to the operator */
    int (*p)(int, int); /* Function pointer for the operation */

    /* Ensure exactly three arguments are provided */
    if (argc != 4)
    {
        printf("Error\n");
        exit(98);
    }

    sec_op = argv[2];

    /* Validate the operator */
    if ((sec_op[0] != '+' && sec_op[0] != '-' && sec_op[0] != '*'
        && sec_op[0] != '/' && sec_op[0] != '%') || sec_op[1] != '\0')
    {
        printf("Error\n");
        exit(99);
    }

    /* Convert input strings to integers */
    num1 = atoi(argv[1]);
    num2 = atoi(argv[3]);

    /* Prevent division or modulo by zero */
    if ((sec_op[0] == '/' || sec_op[0] == '%') && num2 == 0)
    {
        printf("Error\n");
        exit(100);
    }

    /* Retrieve the appropriate function and execute the operation */
    p = get_op_func(sec_op);
    res = (*p)(num1, num2);

    /* Print the result */
    printf("%d\n", res);

    return (0);
}
