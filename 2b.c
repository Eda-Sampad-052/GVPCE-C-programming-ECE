#include <stdio.h>
void main()
{

int a,b;
printf("enter 2 integers: ");
scanf("%d,%d",&a,&b);
printf("The result of bitwise AND is %d\n",a&b);
printf("The result of bitwise OR is %d\n",a|b);
printf("The result of bitwise XOR is %d\n",a^b);
printf("The result of bitwise NOT for num1 is %d\n",~a);
printf("The result of LEFTSHIFT of num1 by 2 is %d\n",a<<2);
printf("The result of RIGHTSHIFT of num1 by 2 is %d\n",a>>2);

}