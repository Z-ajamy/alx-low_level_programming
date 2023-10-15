#include<stdio.h>
#include<stdlib.h>
/**
 * 
 * 
*/
int main (int argc , char *argv[])
{
    int i, res = 0;
    if (argc > 1)
    {
        for(i = 1; i < argc; i++)
        {
            res = res + atoi(argv[i]);
        }
        printf("%d\n", res);
    }

    else if(argc == 1) 
    {
        printf("0\n");
    }
    
return (0);
}
