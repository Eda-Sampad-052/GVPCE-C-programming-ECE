#include <stdio.h>
void printPascalsTriangle(int r) {
    for (int i = 0; i < r; i++) {
        int c = 1;
        for (int j = 0; j < r - i - 1; j++) {
            printf("   ");
        }
        for (int j = 0; j <= i; j++) {
            printf("%6d", c);
            c = c* (i - j) / (j + 1);
        }
        printf("\n");
    }
}
int main() {
    int r;
    printf("Enter the number of rows for Pascal's Triangle: ");
    scanf("%d", &r);
    printPascalsTriangle(r);

    return 0;
}
