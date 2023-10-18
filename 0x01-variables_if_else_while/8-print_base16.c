#include<stdio.h>
/**
 * main - that prints  prints all the numbers of base 16 in lowercase
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
i = 97;

while (i <= 102)
{
	putchar(i);
	i++;
}

putchar('\n');
return (0);
}
