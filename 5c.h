#include <stdio.h>
int fact_nr(int a)
{
    int f = 1;
    for (int i = 1; i <= a; i++)
    {
        f *= i;
    }
    return f;
}
int fact_r(int a)
{
    if (a == 0)
        return 1;
    else 
        return a*fact_r(a-1);
}
void prime(int a) {
        for (int i = 2; i < a; i++) 
        {
            if (a % i == 0) {
                printf("%d is not a prime", a);
                return ;
            }
        }
        printf("%d is a prime", a);
    }