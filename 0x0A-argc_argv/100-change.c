#include <stdio.h>
#include <stdlib.h>
int is_num(char *str);
int is_pos(char *str);


int main(int argc, char *argv[])
{
    unsigned int a, i = 0;
    if (argc != 2 || !is_num(argv[1]))
    {
        printf("Error\n");
        exit(1);
    }
    if (!is_pos(argv[1]))
    {
        printf("0\n");
        exit(1);
    }
    a = atoi(argv[1]);
    if (a >= 25)
    {
        i += a/25;
        a %= 25;           
    }
     if (a >= 10)
    {
        i += a/10;
        a %= 10;
    }
     if (a >= 5)
    {
        i += a/5;
        a %= 5;
    }
    if (a >= 2)
    {
        i += a/2;
        a %= 2;
    }
    if (a >= 1)
    {
        i += a/1;
        a %= 1;
    }
    
        
    printf("%d\n", i);
    return 0;
    
    
    
}


int is_num(char *str)
{
    int i;

    for (i = 0; str[i] != '\0'; i++)
    {
        if (str[i] < '0' || str[i] > '9')
        {
            return (0);
        }
    }
    return (1);
}

int is_pos(char *str)
{
    if (str[1] == '-')
    {
        return (0);
    }
    return (1);
}
