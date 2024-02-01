#include <stdio.h>
int main()
{

float c,f,c1,f1;
printf("enter degrees:");
scanf("%f",&c);
f1=(c*9/5)+32;
printf("temp in fahrenheit: %f\n",f1);

printf("enter fahrenheit:");
scanf("%f",&f);
c1=(f-32)*5/9;
printf("temp in degrees: %f\n",c1);

return 0;
}