#include <stdio.h>

void main() {
    int n;
    printf("Enter the value of n: ");
    scanf("%d", &n);
    int A[n], temp;
    for (int i = 0; i < n; i++) {
        printf("Enter number: ");
        scanf("%d", &A[i]);
    }

    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (A[j] > A[j + 1]) {
                temp = A[j];
                A[j] = A[j + 1];
                A[j + 1] = temp;
            }
        }
    }
  printf("smallest no %d\nlargest number %d",A[0],A[n-1]);

 
}