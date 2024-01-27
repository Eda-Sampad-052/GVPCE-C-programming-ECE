#include <stdio.h>
void main()
{
int n,co=0,cp=0,ce=0,cn=0,sum=0;
printf("enter n: ");
scanf("%d",&n);
int A[n];
for (int i=0;i<n;i++)
{
printf("enter %d integer",i+1);
scanf("%d",&A[i]);
}
for (int i=0;i<n;i++)
{
sum+=A[i];
if (A[i]>-1)
cp++;
else
cn++;
if(A[i]%2==0)
ce++;
else
co++;
}
printf("no of even nos %d\n no of odd nos %d \n no of positive nos %d\nno of negative nos %d\nsum of no is %d\n",ce,co,cp,cn,sum);
}