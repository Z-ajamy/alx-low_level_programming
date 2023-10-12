#include "variadic_functions.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * print_int - print an integer
 * @list: list of arguments
 * Return: void
*/
void print_int(va_list list)
{
	printf("%d", va_arg(list, int));
}
/**
 * print_char - prints a character
 * @list: list of arguments
 * Return: void
*/
void print_char(va_list list)
{
	printf("%c", va_arg(list, int));
}
/**
 * print_float - prints a float
 * @list: list of arguments
 * Return: void
*/
void print_float(va_list list)
{
	printf("%f", va_arg(list, double));
}
/**
 * print_string - prints a string
 * @list: list of arguments
 * Return: void
*/
void print_string(va_list list)
{
	char *s = va_arg(list, char*);

	if (s == NULL)
	{
		printf("(nil)");
		return;
	}
	printf("%s", s);
}
/**
 * print_all - print anything in paramerters
 * @format: list of types of arguments passed to the function
 * Return: void
*/
void print_all(const char * const format, ...)
{
	va_list list;
	int i, j;
	const char *seperator = "";
	printer functions[] = {
		{"i", print_int},
		{"c", print_char},
		{"f", print_float},
		{"s", print_string}
	};

	va_start(list, format);
	i = 0, j = 0;
	while (format && format[i])
	{
		j = 0;
		while (j < 4)
		{
			if (format[i] == functions[j].symbol[0])
			{
				printf("%s", seperator);
				functions[j].print(list);
				seperator = ", ";
				break;
			}
			j++;
		}
		i++;
	}
	printf("\n");
	va_end(list);
}
