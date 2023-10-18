#include<stdio.h>
/**
 * main - that prints the alphabet in lowercase in reverse, followed by a new line.
 *
 * Return: 0 (success)
*/
int main(void)
{
int i;

for (i = 122; i >= 97; i--)
{
	putchar(i);
}
putchar('\n');
return (0);
}
