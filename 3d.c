#include <stdio.h>
void main()
{
    int a, b;
    char ch;
    printf("enter 2 integers: ");
    scanf("%d, %d", &a, &b);
    printf("enter operator: ");
    scanf(" %c", &ch);
    switch (ch)
    {
        case '+':
            printf("%d+%d=%d", a, b, a + b);
            break;
        case '-':
            printf("%d-%d=%d", a, b, a - b);
            break;
        case '*':
            printf(" %dX%d =%d", a, b, a * b);
            break;
        case '/':
            printf("%d/%d=%d", a, b, a / b);
            break;
        case '%':
            printf("%d%%%d=%d", a, b, a % b);
            break;
        default:
            printf("please enter correct operator");
    }
}