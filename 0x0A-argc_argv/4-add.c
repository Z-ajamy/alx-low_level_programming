#include <stdio.h>
#include <stdlib.h>

/**
 * is_num - Checks if a string consists only of digits.
 * @str: The string to check.
 *
 * Return: 1 if the string is numeric, 0 otherwise.
 */
int is_num(char *str)
{
    int i;

    for (i = 0; str[i] != '\0'; i++)
    {
        if (str[i] < '0' || str[i] > '9')
        {
            return (0);
        }
    }
    return (1);
}

/**
 * main - Adds positive numbers passed as command-line arguments.
 * @argc: Argument count.
 * @argv: Argument vector (array of strings).
 *
 * Return: 0 on success, 1 if any argument is non-numeric.
 */
int main(int argc, char *argv[])
{
    int sum = 0, i;

    if (argc == 1)
    {
        printf("0\n");
        return (0);
    }

    for (i = 1; i < argc; i++)
    {
        if (!is_num(argv[i]))
        {
            printf("Error\n");
            exit(1);
        }
        sum += atoi(argv[i]);
    }

    printf("%d\n", sum);
    return (0);
}
