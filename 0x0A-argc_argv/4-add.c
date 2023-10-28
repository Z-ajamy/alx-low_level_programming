#include <stdio.h>
#include <stdlib.h>

int main (int argc, char *argv[])
{
    int i, r = 0;

    for (i = 0; i < argc; i++)
    {
        r = r + atoi(argv[i]);
    }
    printf("%d\n", r);
    return (0);
}
