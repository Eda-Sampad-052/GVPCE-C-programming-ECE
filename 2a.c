#include <stdio.h>
int main()
{

    float a,b;
    printf("enter no ");
    scanf("%f,%f",&a,&b);
    printf("after post increment of 1st value %f\n",a++);
    printf("after pre increment of 2nd value %f",++b);
    return 0;
}