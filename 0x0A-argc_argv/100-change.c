#include <stdio.h>
#include <stdlib.h>

/**
 * is_num - Checks if a string consists only of numeric characters.
 * @str: The string to check.
 *
 * Return: 1 if the string is numeric, 0 otherwise.
 */
int is_num(char *str)
{
    int i;

    for (i = 0; str[i] != '\0'; i++)
    {
        if (str[0] == '-')
            continue;

        if (str[i] < '0' || str[i] > '9')
            return (0);
    }
    return (1);
}

/**
 * is_pos - Checks if a number (given as a string) is positive.
 * @str: The string representation of the number.
 *
 * Return: 1 if positive, 0 if negative.
 */
int is_pos(char *str)
{
    if (str[0] == '-')
        return (0);
    return (1);
}

/**
 * main - Computes the minimum number of coins needed to make change.
 * @argc: Argument count.
 * @argv: Argument vector (array of strings).
 *
 * Return: 0 on success, 1 if an error occurs.
 */
int main(int argc, char *argv[])
{
    unsigned int amount, coins = 0;

    if (argc != 2 || !is_num(argv[1]))
    {
        printf("Error\n");
        exit(1);
    }

    if (!is_pos(argv[1]))
    {
        printf("0\n");
        exit(1);
    }

    amount = atoi(argv[1]);

    if (amount >= 25)
    {
        coins += amount / 25;
        amount %= 25;
    }
    if (amount >= 10)
    {
        coins += amount / 10;
        amount %= 10;
    }
    if (amount >= 5)
    {
        coins += amount / 5;
        amount %= 5;
    }
    if (amount >= 2)
    {
        coins += amount / 2;
        amount %= 2;
    }
    if (amount >= 1)
    {
        coins += amount / 1;
    }

    printf("%d\n", coins);
    return (0);
}
