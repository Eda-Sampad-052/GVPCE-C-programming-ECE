#include <stdio.h>

void main() {
    char num1[20], num2[20];
    printf("Enter the first and second integers (separated by a space): ");
    scanf("%s %s", num1, num2);
    int i = 0;
    while (num1[i] != '\0' && num2[i] != '\0') {
        if ((num1[i] < '0' || num1[i] > '9') || (num2[i] < '0' || num2[i] > '9')) {
            printf("Invalid input for the integers.\n");
            return ;
        }
        i++;
    }
    int n1 = 0, n2 = 0;
    i = 0;
    while (num1[i] != '\0') {
        n1 = n1 * 10 + (num1[i] - '0');
        i++;
    }
    i = 0;
    while (num2[i] != '\0') {
        n2 = n2 * 10 + (num2[i] - '0');
        i++;
    }
    int sum = n1 + n2;
    printf("Sum: %d\n", sum);
}
