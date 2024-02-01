#include <stdio.h>

int isArmstrongNumber(int num, int n) {
    int originalNum = num;
    int sum = 0;
    while (num > 0) {
        int digit = num % 10;
        int temp = 1;
        for (int i = 0; i < n; i++) {
            temp *= digit;
        }
        sum += temp;
        num /= 10;
    }
    if (originalNum == sum) {
        return 1;
    } else {
        return 0;
    }
}
int main() {
    int num, n;
    printf("Enter an integer: ");
    scanf("%d", &num);
    printf("Enter the power (n): ");
    scanf("%d", &n);
    if (isArmstrongNumber(num, n)) {
        printf("%d is an Armstrong number.\n", num);
    } else {
        printf("%d is not an Armstrong number.\n", num);
    }
    return 0;
}