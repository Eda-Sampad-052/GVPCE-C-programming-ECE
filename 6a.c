#include <stdio.h>
void main()
{
int n;
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
printf("%d\n",A[i]);
}
}