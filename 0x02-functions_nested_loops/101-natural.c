#include"main.h"
#include <stdio.h>
/**
 * 
 * 
*/
int main(){
    int i, res;
    for (i = 1023; i > 0; i--)
    {
        if (i % 3 || i % 5)
        {
            res += i;
        }
        
    }
    printf("%d\n",res);
    return 0;
}
