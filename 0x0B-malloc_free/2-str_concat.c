#include "main.h"
#include <stdlib.h>

	char *str_concat(char *s1, char *s2)
	{
	if (s1 == NULL && s2 == NULL) {
        return NULL;}
	int i;
	char *p;
	int n;
	int c;
	int m;

	for (i = 0; s1[i] != '\0'; i++)
	{}
	for (c = 0; s2[c] != '\0'; c++)
	{}
	p = (char *) malloc((i + c + 1)* sizeof(char));
	
	if (p == NULL)
	{
		return (NULL);
	}
	if(s1)
	{
		for (n = 0; n < i; n++)
		{
			p[n] = s1[n];
		}
	}
	if(s2)
	{
		for (; n < (c + i); n++)
		{
			p[n] = s2[m];
			m++;
		}
	}
	p[n] = '\0';
		
	return (p);
	}
