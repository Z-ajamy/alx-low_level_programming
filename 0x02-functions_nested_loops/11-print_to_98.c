#include <stdio.h>
#include <stdio.h>
/**
 * print_times_table - Multiplication table from 0 to 15
*/
void print_times_table(int n)
{
	if (n < 15 && n > 0)
	{
		int i, j;

		for (i = 0; i <= n; i++)
		{
			for (j = 0; j <= n; j++)
			{
			int R = i * j;

				if (R == 0)
					{
			   if (j == 0)
			   {
				 printf("%d", R);
				}
				else
				{
					printf(",   %d", R);
				}
			}
			else if (R < 10)
			{
				printf(",   %d", R);
			}
			else if (R >= 10 && R < 100)
			{
				printf(",  %d", R);
			}
			else if (R >= 100)
			{
				printf(", %d",R);
			} 
			}
		putchar('\n');
		}
	}
}
