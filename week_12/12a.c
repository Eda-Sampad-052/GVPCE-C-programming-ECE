#include <stdio.h>
void main()
{
FILE *f1;
f1=fopen("12a.txt","r");
char c;
while((c=fgetc(f1))!=EOF)
{
printf("%c",c);
}
fclose(f1);
}
