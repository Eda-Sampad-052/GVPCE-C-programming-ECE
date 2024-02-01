#include <stdio.h>
#include <ctype.h>

void main() {
    int a;
    printf("Enter length of string: ");
    scanf("%d", &a);

    char st[a];
    printf("Enter string: ");
    scanf("%s", st);

    
    for (int i = 0; st[i] != '\0'; i++) {
        if (islower(st[i]))
            st[i] = toupper(st[i]);
        else
            st[i] = tolower(st[i]);
    }

    printf("\nModified string is %s\n", st);
}