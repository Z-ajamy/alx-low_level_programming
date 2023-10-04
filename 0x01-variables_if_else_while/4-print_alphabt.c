#include <stdio.h>
/**
 * main - Entry of the program
 *
 *Return: 0 (success)
 */
int main(void)
{
	int i = 97;

	while (i < 123)
	{
		putchar(i);
		i++;
		if (i == 113 || i == 101)
		{
			i++;
		}
	}
	putchar('\n');
	return (0);


}
