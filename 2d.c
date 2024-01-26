#include <stdio.h>
void main()
{

int a,b,c,max;
printf("enter three numbers: ");
scanf("%d,%d,%d",&a,&b,&c);
max=a>b?(a>c?a:c):(b>c?b:c);
printf("The greatest of the three numbers is %d",max);

}