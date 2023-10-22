#include "main.h"
#include <stdio.h>

/**
 * print_to_98 - prints all natural numbers from n to 98
 * @n: start
 * i: counter
 *
 * Return: void
 */
	void print_to_98(int n)
{
	 int i = n;

	if (n > 98)
	{
		for (; n != 97; n--)
		{
			if (n == i)
			{
				printf("%d", n);
			}
			else
			{
				printf(", %d", n);
			}
		}
	}
	if (n < 98)
	{
		for (; n != 99; n++)
		{
			if (n == i)
			{
				printf("%d", n);
			}
			else
			{
				printf(", %d", n);
			}
		}
	}
	if (n == 98)
	{
		printf("98");
	}
	printf("\n");
}
