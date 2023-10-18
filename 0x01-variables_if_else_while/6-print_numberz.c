#include<stdio.h>
/**
 * main - that prints  all single digit numbers of base 10 starting from 0
 * followed by a new line.
 * Return: 0 (success)
*/
int main(void)
{
int i;
i = 48;
while (i <= 57)
{
	putchar(i);
	i++;
}
putchar('\n');
return (0);
}
