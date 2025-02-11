#include<stdio.h>
/**
 * main - all possible different combinations of two digits.
 * Numbers must be separated by ,, followed by a space
 * main - prints all possible combinations of two two-digit numbers.
 * The numbers should range from 0 to 99 The
 * two numbers should be separated by a space
 *
 * All numbers should be printed with two digits, 1 should be printed as 01
 * The combination of numbers must be
 * separated by comma, followed by a space
 *
 * The combinations of numbers should be printed in
 * ascending order 00 01 and 01 00 are considered
 *
 * as the same combination of the numbers 0 and 1
 * You can only use putchar eight times maximum in your code
 * You are not allowed to use any variable of type char
 * All your code should be in the main function
 *
 * Return: 0 (success)
 */
int main(void)
{
    
	int i, j;

	for (i = 0; i <= 99; i++)
	{
		for (j = 0; j <= 99; j++)
		{
			if (i < j)
			{
				putchar((i / 10) + 48);
				putchar((i % 10) + 48);
				putchar(' ');
				putchar((j / 10) + 48);
				putchar((j % 10) + 48);
				if (i != 98 || j != 99)
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
