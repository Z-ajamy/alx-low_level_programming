#include "main.h"
int _atoi(char *s)
{
	int i = 0, sig = 1, n, count = 0;
	int num = 0;

	while (1)
	{
		if (s[i] == '\0')
			return (0);
		else if (s[i] >= '0' && s[i] <= '9')
			break;
		i++;
	}

	for (n = i - 1; n >= 0; n--)
	{
		if (s[n] == '-')
		{
			count++;
		}
	}


	if (count % 2 == 1)
		sig = -1;

	for (; s[i] >= '0' && s[i] <= '9'; i++)
	{
		if (num > (2147483647 - (s[i] - '0')) / 10)
		{
			return (sig == 1) ? 2147483647 : -2147483648;
		}
		num = (num * 10) + s[i] - '0';
	}

	num *= sig;
	return (num);
}
