#include <stdio.h>
#include <ctype.h>

void main() {
    int a;
    printf("Enter length of string: ");
    scanf("%d", &a);

    char st[a],g;
    printf("Enter string: ");
    scanf("%s", st);
    printf("enter character");
    scanf("%s",&g);
    for (int i = 0; st[i]!='\0';i++) {
            if (st[i] =='a'||st[i] =='e'||st[i] =='i'||st[i] =='o'||st[i] =='u') 
            {
    
                    st[i] =g;
                }
            }

    printf("\nModified string is %s\n", st);

}