#include"main.h"
#include<stdlib.h>

	int null_OR_not(char *s3)
	{
		int i;
		if (s3 == NULL)
			return(0);

		for (i = 0; s3[i] != '\0'; i++)
		{}
		return (i);
		}
	

    char *str_concat(char *s1, char *s2)
	{
		int len1, len2, i, m;
		char *p;

		len1 = null_OR_not(s1);
		len2 = null_OR_not(s2);
		p = (char *) malloc((len1 + len2 + 1) * sizeof(char));

		for (i = 0; i < len1; i++)
		{
			p[i] = s1[i];
		}
		for (m = 0; m < len2 ; m++)
		{
			p[i] = s2[m];
			i++;
		}
		p[i] = '\0';

		return(p);
	}
