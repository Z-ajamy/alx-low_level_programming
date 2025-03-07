#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Generates a random valid password for 2772.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char c, a[134];
	int limit = 2772, i;

	srand(time(NULL));

	for (i = 0; limit > 122; i++)
	{
		c = rand() % 102 + 21;
		a[i] = c;
		limit -= c;
	}
	a[i] = limit;
	a[i + 1] = '\0';
	printf("%s", a);

	return (0);
}
