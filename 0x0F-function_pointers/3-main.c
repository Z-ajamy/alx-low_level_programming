#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * main - Entry point
 * @argc: Argument count
 * @argv: Argument vector
 *
 * Return: Always 0 (Success)
 */
int main(int argc, char *argv[])
{
	char *o = argv[2];
	int a;
	int b;
	int (*fun_p)(int, int);

	if (argc != 4)
	{
		printf("Error\n");
		return (98);
	}


	if ((*o != '+' && *o != '-' && *o != '*' && *o != '/' && *o != '%')
	|| argv[2][1] != '\0')
	{
		printf("Error\n");
		return (99);
	}

	a = atoi(argv[1]);
	b = atoi(argv[3]);

	if ((*o == '/' || *o == '%') && b == 0)
	{
		printf("Error\n");
		return (100);
	}
	fun_p = get_op_func(o);

	printf("%d\n", fun_p(a, b));
	return (0);
}
