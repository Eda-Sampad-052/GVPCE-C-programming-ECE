#include <stdio.h>
#include <string.h>
#include <ctype.h>

void main() {
    char str[100];
    printf("Enter a string: ");
    scanf("%s", str);
    int l = strlen(str);
    int null = 1;
    for (int i = 0; i < l; i++) {
        if (str[i] != '\0') {
            null = 0;
            break;
        }
    }
    if (null) {
        printf("The entered string is not a palindrome.\n");
        return ;
    }
    int i, j;
    for (i = 0; i < l; i++) 
        str[i] = tolower(str[i]);
    for (i = 0, j = l - 1; i < j; i++, j--) {
        while (!isalnum(str[i]) && i < j) 
            i++;
        while (!isalnum(str[j]) && i < j) 
            j--;
        if (str[i] != str[j]) 
        { 
            printf("The entered string is not a palindrome.\n");
            return ;
        }
    }
    printf("The entered string is a palindrome.\n");
}