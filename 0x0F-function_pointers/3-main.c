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
	char *o;
	int a;
	int b;

	o = argv[2];
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

	printf("%d\n", get_op_func(o)(a, b));
	return (0);
}
