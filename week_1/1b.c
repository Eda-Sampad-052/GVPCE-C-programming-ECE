#include <stdio.h>
int main()
{
int i=0;
float f=0;
char ch;
printf("enter integer no :");
scanf("%d",&i);
printf("enter no with decimal :");
scanf("%f",&f);
printf("enter character :");
scanf("%s",&ch);
printf("the variables values are:\ni=\t%d\nf=%.2f\n",i,f);
printf("c=%c",ch);

return 0;
}