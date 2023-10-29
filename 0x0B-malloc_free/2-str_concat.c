#include "main.h"
#include <stdlib.h>

	char *str_concat(char *s1, char *s2)
	{
		int i;
		char *p;
		int n;
		int c;
		int m;

		for (i = 0; s1[i] != '\0'; i++)
		{}
		for (c = 0; s2[c] != '\0'; c++)
		{}
		p = (char *) malloc((i + 1)* sizeof(char));

		for (n = 0; n <= (i - 1) ; n++)
		{
			p[n] = s1[n];
		}
		for (m = 0; m <= c; c++)
		{
			p[n] = s2[c];
			c++;
		}
		
	}
