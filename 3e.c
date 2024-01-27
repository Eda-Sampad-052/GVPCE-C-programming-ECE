#include <stdio.h>
void main()
{
    char ch;
    printf("Enter a character: ");
    scanf("%c", &ch);
    if (ch >= 'A' && ch <= 'Z')
    {
        ch += (32);
        printf("The lowercase character is: %c\n", ch);
    }
    else if (ch >= 'a' && ch <= 'z')
    {
        ch -= (32);
        printf("The uppercase character is: %c\n", ch);
    }
    else
    {
        printf("The input is not a character.\n");
    }
}