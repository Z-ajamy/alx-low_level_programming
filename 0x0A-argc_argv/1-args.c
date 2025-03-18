#include <stdio.h>

/**
 * main - Prints the number of arguments passed to the program.
 * @argc: Argument count.
 * @argv: Argument vector (unused).
 *
 * Return: Always 0 (Success).
 */
int main(int argc, __attribute__((unused)) char *argv[])
{
	printf("%d\n", argc - 1);

	return (0);
}
