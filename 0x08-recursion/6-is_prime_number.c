#include "main.h"


int _prime_number(int n, int i);
int is_prime_number(int n)
{
    if (n <= 0 || n==1 || !(n % 2))
    {
        return 0;
    }
    if (n == 2)
    {
        return 1;
    }
    
    return _prime_number(n, 1);
}

int _prime_number(int n, int i)
{
    if (i * i == n)
    {
        return 0;
    }
    if (i >= (n / 2 +1))
    {
        return 1;
    }
    
    return _prime_number(n, i +2);
}
