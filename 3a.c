#include <stdio.h>
int main()
{
    int a, b, c;
    printf("enter 2 numbers: ");
    scanf("%d,%d", &a, &b);
    printf("enter the number you want to check between the given limits :");
    scanf("%d", &c);
    if (a <= c && b >= c)
    {
        printf("the number %d is present between %d and %d", c, a, b);
    }
    else
    {
        printf("the number %d is not present between %d and %d", c, a, b);
    }

    return 0;
}