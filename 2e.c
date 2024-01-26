#include <stdio.h>
void main()
{

int a,b;
printf("enter two integers ");
scanf("%d,%d",&a,&b);
printf("The values before swapping are %d %d\n",a,b); 
a=a+b;    
b=a-b;    
a=a-b;

printf("The values after swapping are %d %d\n",b,a); 

}