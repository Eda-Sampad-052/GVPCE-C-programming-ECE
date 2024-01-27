#include <stdio.h>

int main() 
{
    int a, i, j, k;
    printf("Enter a number: ");
    scanf("%d", &a);
    for (i = 0; i < a; i++) 
    {
        for (j = 0; j < i; j++) 
        {
            printf("  ");
        }
        for (k = a - i; k >= 1; k--) 
        {
            printf("%d", k);
            if (k > 1) 
            {
                printf("   ");
            }
        }
        printf("\n");
    }
    return 0;
}