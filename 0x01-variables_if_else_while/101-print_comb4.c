#include<stdio.h>
/**
 * main - prints all possible different combinations of three digits.
 * Numbers must be separated by ,, followed by a space
 * The three digits must be different
 *
 * Return: 0 (success)
*/
int main(void)
{
	int i, n, m;

	for (i = 48; i <= 57; i++)
	{
		for (n = 48; n <= 57; n++)
		{
			for (m = 48; m <= 57; m++)
			{
				if (m > n && n > i)
				{
				putchar(i);
				putchar(n);
				putchar(m);
					if ((m != 57) || (i != 55) || (n != 56))
					{
					putchar(',');
					putchar(' ');
					}
				}
			}
		}
	}
putchar('\n');
return (0);
}
