#include <stdio.h>
#include <stdlib.h>

/**
 * main - Multiplies two numbers passed as command-line arguments.
 * @argc: Argument count.
 * @argv: Argument vector (array of strings).
 *
 * Return: 0 on success, 1 on error.
 */
int main(int argc, char *argv[])
{
    int a, b;

    if (argc != 3)
    {
        printf("Error\n");
        exit(1);
    }

    a = atoi(argv[1]);
    b = atoi(argv[2]);

    printf("%d\n", a * b);

    return (0);
}
