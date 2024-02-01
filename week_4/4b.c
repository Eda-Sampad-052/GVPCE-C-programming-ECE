#include <stdio.h>
void main()
{
int a,i=1,d=0;
printf("Enter a number: ");
scanf("%d", &a);
if(a<0)
{
printf("Invalid input");
}
else
{
for(i;i<=a;i++)
{
if(a%i==0)
{
d++;
printf("%d\n",i);
}
else
{
continue;
}
}
if(d==1)
{
printf("%d is a prime number",a);
}
else
{
printf("%d is not a prime number",a);
}
}
}