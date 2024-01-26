#include <stdio.h>
#include "5c.h"
void main()
{
    int i,a,b;
    printf("enter number:");
    scanf("%d",&i);
    a=fact_nr(i);
    b=fact_r(i);
    printf("factorial of %d without rec is %d\n",i,a);
    printf("factorial of %d with rec is %d\n",i,b);
    prime(i);
}