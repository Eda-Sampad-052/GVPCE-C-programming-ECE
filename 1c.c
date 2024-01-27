#include <stdio.h>
int main()
{

int a,b,c,d,e,f,g;
printf("enter 2 integer :");
scanf("%d,%d",&a,&b);
c=a+b;
d=a-b;
e=a*b;
f=a/b;
g=a%b;
printf("addition: %d\n",c);
printf("subtraction: %d\n",d);
printf("multiplication: %d\n",e);
printf("division: %d\n",f);
printf("remainder: %d\n",g);

return 0;
}