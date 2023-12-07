#include <stdio.h>
/**
 * main - Fizz-Buzz test
 * Return : 0 (SUCCESS)
*/
int main(void)
{
	int i;

	for (i = 1; i < 100; i++)
	{
		if (i % 3 == 0 && i % 5 != 0)
		{
			printf("%s ", "Fizz");
		}
		else if (i % 5 == 0 && i % 3 != 0)
		{
			printf("%s ", "Buzz");
		}
		else if (i % 5 == 0 && i % 3 == 0)
		{
			printf("%s ", "FizzBuzz");
		}
		else if (i % 5 != 0 && i % 3 != 0)
		{
			printf("%i ", i);
		}
	}
	printf("Buzz\n");
	return (0);
}
