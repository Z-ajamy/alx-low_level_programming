#include<stdio.h>
/**
 * main - all possible different combinations of two digits.
 * Numbers must be separated by ,, followed by a space
 *
 * Return: 0 (success)
 */
int main(void)
{
	int n, m;

	for (n = 48; n <= 57; n++)
	{
		for (m = 48; m <= 57; m++)
		{
			if (m > n)
			{
				putchar(n);
				putchar(m);

				if ((m != 57) || (n != 56))
				{
				putchar(',');
				putchar(' ');
				}
			}
		}
	}
putchar('\n');
return (0);
}
