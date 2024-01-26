#include <stdio.h>
void main()
{
int a,*i;
char b[100],*ch;
float c,*f;
 printf("enter a string,integer,float: ");
 gets(b);
 scanf("%d %f",&a,&c);
i=&a;
ch=&b;
f=&c;
printf("addres of string %s is %d\n",b,ch);
printf("address of integer %d is %d\n",a,i);
printf("address of float %f is %d\n",c,f);

}