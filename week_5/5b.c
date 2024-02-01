#include <stdio.h>
int lcm(int a, int b) 
{    int f=1,max;
    max=a>b?a:b;
   while(f)
   {
    if(max%a==0 && max%b==0)
    {
    return max;
    break;
    }
   
   else
   max++;
}
}
int main() {
    int num1, num2;
    printf("Enter 2 number: ");
    scanf("%d,%d", &num1,&num2);
    if (num1<=0 || num2<=0 )
    printf("lcm is not defined");
    else
    printf("LCM of %d and %d is %d\n", num1, num2, lcm(num1, num2));
    return 0;
}