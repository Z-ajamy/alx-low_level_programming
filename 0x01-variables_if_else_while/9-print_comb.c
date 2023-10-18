#include<stdio.h>
/**
 * main - prints all possible combinations of single-digit numbers.
 * Numbers must be separated by ,, followed by a space
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
	if (i != 57)
	{
	putchar(',');
	putchar(' ');
	}
	i++;
}
putchar('\n');
return (0);
}
