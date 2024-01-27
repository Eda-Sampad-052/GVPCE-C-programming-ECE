#include <stdio.h>
void add(float *a, float *b, float *result) {
    *result = *a + *b;
}
void main() {
float num1, num2, sum;
printf("Enter the 2 integers: ");
scanf("%f %f",&num1,&num2);
add(&num1, &num2, &sum);
printf("Sum of %f and %f is: %f\n", num1, num2, sum);
}