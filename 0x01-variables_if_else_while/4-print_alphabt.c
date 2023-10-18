#include<stdio.h>
/**
 * main - that prints the alphabet in lowercase,and then in uppercase ,
 * followed by a new line.
 * Print all the letters except q and e
 * Return: 0 (success)
*/
int main(void)
{
int i;
i = 97;
while (i <= 122)
{
if (i != 101 && i != 113)
{
	putchar(i);
}
i++;
}
putchar('\n');
return (0);
}
