#include <stdlib.h>
#include <stdio.h>
#include "hash_tables.h"

/**
 * main - check the code for Holberton School students.
 *
 * Return: Always EXIT_SUCCESS.
 */
int main(void)
{
	char *s;

	s = "\x07\x08\x09\x0A\x0BCisfun\x0C";
	printf("%lu\n", hash_djb2((unsigned char *)s));
	return (EXIT_SUCCESS);
}
