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
		int len1, len2, i, j;
		char *p;

		len1 = null_OR_not(s1);
		len2 = null_OR_not(s2);
		p = (char *) malloc((len1 + len2 + 1) * sizeof(char));

		 for (i = 0; s1 && s1[i] != '\0'; i++)
    {
        p[i] = s1[i];
    }

    for (j = 0; s2 && s2[j] != '\0'; j++)
    {
        p[i] = s2[j];
        i++;
    }

    p[i] = '\0';
		return(p);
	}
