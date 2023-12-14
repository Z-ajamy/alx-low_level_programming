#include<stdio.h>
/**
 * main - Entry point of the program
 *
 * Description: Prints the name of the file it was compiled from.
 *              Followed by a new line.
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	printf("%s\n", __FILE__);
	return (0);
}
