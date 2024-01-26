#include <stdio.h>
int main()
{
int a,b,i,x,k=0;
printf("enter the values of a and b:"); 
scanf("%d %d",&a,&b); 
printf("usage of continue statement\n"); 
for(i=0; i<a; i++)
{
if(i==b)
continue; 
printf("%d\n", i);
}
printf("\nusage of break statement\n"); 
label:
for(i=0; i<=a; i++)
{
if(i==b)
break;
printf("%d\n",i);
}
k+=1;
if (k==2)
{
goto label1;
}
else
{
printf("usage of goto statement\n"); 
for(i=1; i<a; i++)
{
goto label; 
printf("%d\n",i);
}
label1:
 return 0;
}
}