#include <stdio.h>
void main()
{

int a,b;
printf("enter a no greater than 2 digit no ");
scanf("%d",&a);
b=a%100;
printf("The last two digits of the given integer are %02d",b);
}