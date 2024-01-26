#include <stdio.h>
#include <stdlib.h>

void main() {
int n, *arr, sum = 0;
printf("Enter the number of elements: ");
scanf("%d", &n);
arr = (int *)malloc(n * sizeof(int));
printf("Enter %d integer values:\n", n);
for (int i = 0; i < n; i++) {
scanf("%d", &arr[i]);
sum += arr[i];
    }
float average = sum / n;
printf("Average of given values is %f\n", average);
}
