#include <stdio.h>

void main()
{
int m,n,c=0;
printf("enter n: ");
scanf("%d",&n);
int A[n];
for (int i=0;i<n;i++)
{
printf("enter %d integer ",i+1);
scanf("%d",&A[i]);
}
printf("enter the number u want to search ");
scanf("%d",&m);
for (int i=0;i<n;i++)
{
if(A[i]==m){
printf("the element is present at %d position \n", i+1);
c++;
}}
if (c==0)   
printf("the element is not found");    
}