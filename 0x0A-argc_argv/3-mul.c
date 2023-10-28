#include<stdio.h>
#include<stdlib.h>
/**
 * main - multiplies two numbers
 * @argc: number of arguments
 * @argv: array of arguments
 *
 * Return: 0 (Success), 1 (Error)
 */
int main(int argc, char *argv[])
{
	if (argc == 3)
	{
	int i = atoi(argv[1]);
	int n = atoi(argv[2]);

	printf("%d\n", i * n);
	return (0);
	}
	else
	{
	printf("Error\n");
	return (1);
	}
}
