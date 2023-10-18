#include<stdio.h>
/**
 * main - that prints the alphabet in lowercase,and then in uppercase ,followed by a new line.
 *
 * Return: 0 (success)
*/
int main(void)
{
int i;

for (i = 97; i <= 122; i++)
{
	putchar(i);
}
for (i = 65; i <= 90; i++)
{
	putchar(i);
}
putchar('\n');
return (0);
}
