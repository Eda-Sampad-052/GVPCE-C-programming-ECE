#include<stdio.h>
int a,b;
void sum1()
 {
 	int add;
 	add=a+b;
printf("The sum of a and b with no arguments and no return type is %d\n",add);
 } 
int sum2()
 {
int add;
 add=a+b;
 	return(add);
 }
 void sum3(int a,int b)
 {
 	int add;
 	add=a+b;
printf("The sum of a and b with arguments and no return type is %d\n",add);
 }

 int sum4(int a,int b)
 {
 	int add;
 	add=a+b;
 	return(add);
 }

void main()
 {int A,B;
    printf("enter number");
 scanf("%d,%d",&a,&b);
 	sum1();
A=sum2();
 	printf("The sum of a and b with no arguments and return type is %d\n",A);
 	sum3(a,b);
 	B=sum4(a,b);
 	printf("The sum of a and b with arguments and return type is %d\n",B);
}
