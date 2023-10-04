#include <stdio.h>
/**
 *main - Entry
 *
 *
 *Return: 0 (done)
 */
int main(void)
{
	int i = 48;

	while (i < 58)
	{
		putchar(i);
		putchar(',');
		putchar(' ');
	i++;
	}
	putchar('\n');
	return (0);
}
