#include <stdio.h>
int str_len(char a[100])
{
    int c=0;
for (int i=0;a[i]!='\0';i++)
c++;
return c;

}

void str_cpy(char a[100],char b[100])
{
    int i=0;
    for (i;a[i]!='\0';i++)
    a[i]=b[i];
    a[i]='\0';
    printf("\nthe copied string is ");
    puts(b);
}

void str_rev(char a[100]) {
    char b[100];
    int c = str_len(a);
    for (int i = c - 1; i >= 0; i--)
        b[c - 1 - i] = a[i];
    b[c] = '\0';
    printf("\nThe reversed string 1 is:");
    puts(b);
}

int str_cmp(char a[100], char b[100])
{

    while (*a != '\0' && *b != '\0') {
        if (*a!= *b) {
            return (*a - *b);
        }
        a++;
        b++;
    }
    return (*a - *b);

}

void main()
{
char a[100],c[100],temp[100];
int b;
printf("enter 2 strings: ");
gets(a);
gets(c);
for (int i=0;a[i]!='\0';i++)
temp[i]=a[i];
b=str_len(a);
printf("\nthe length of string 1 is %d\n",b);
str_cpy(a,c);
for (int i=0;temp[i]!='\0';i++)
a[i]=temp[i];
str_rev(a);
int r=str_cmp(a,c);
if (r== 0) {
        printf("\nThe strings are equal.\n");
    } else if (r < 0) {
        printf("\nString 1 is smaller than String 2.\n");
    } else {
        printf("\nString 1 is larger than String 2.\n\n");
    }



}