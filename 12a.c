#include <stdio.h>
#include <stdlib.h>
void main()
{
FILE *f;
char str1[100];
f=fopen("12a.txt","r");
while(fgets(str1,100,f)!=NULL)
{
printf("%s",str1);
}
fclose(f);

}