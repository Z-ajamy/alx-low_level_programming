#include<stdio.h>
#include<stdlib.h>
/**
 * 
 * 
*/
int main (int argc , char *argv[])
{
    int res;
    if (argc == 3)
    {
        res = atoi(argv[1]) * atoi(argv[1]);
        printf("%d", res);
    }
    return (0);
}
