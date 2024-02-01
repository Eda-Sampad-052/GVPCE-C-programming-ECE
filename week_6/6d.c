#include <stdio.h>

int a1, a2, b1, b2;

void minput(int A[a1][a2], int B[b1][b2]) {
    printf("Enter elements of the 1st matrix:\n");
    for (int i = 0; i < a1; i++) {
        for (int j = 0; j < a2; j++) {
            scanf("%d", &A[i][j]);
        }
    }

    printf("Enter elements of the 2nd matrix:\n");
    for (int i = 0; i < b1; i++) {
        for (int j = 0; j < b2; j++) {
            scanf("%d", &B[i][j]);
        }
    }
}

void mprintf(int A[a1][a2]) {
    for (int i = 0; i < a1; i++) {
        for (int j = 0; j < a2; j++) {
            printf("%d ", A[i][j]);
        }
        printf("\n");
    }
}

void mtrans(int A[a1][a2], int B[b1][b2]) {
    int C[a2][a1], D[b2][b1], i, j;

    for (i = 0; i < a1; i++) {
        for (j = 0; j < a2; j++) {
            C[j][i] = A[i][j];
        }
    }

    for (i = 0; i < b1; i++) {
        for (j = 0; j < b2; j++) {
            D[j][i] = B[i][j];
        }
    }

    printf("Transpose of 1st matrix:\n");
    mprintf(C);

    printf("Transpose of 2nd matrix:\n");
    mprintf(D);
}

void mmulti(int A[a1][a2], int B[b1][b2]) {
    int i, j, k, C[a1][b2];
    for (i = 0; i < a1; i++) {
        for (j = 0; j < b2; j++) {
            C[i][j] = 0;
            for (k = 0; k < a2; k++) {
                C[i][j] += A[i][k] * B[k][j];
            }
        }
    }
    printf("Matrix after multiplication:\n");
    mprintf(C);
}

void madd(int A[a1][a2], int B[b1][b2]) {
    int i, j, C[a1][a2];
    for (i = 0; i < a1; i++) {
        for (j = 0; j < a2; j++) {
            C[i][j] = A[i][j] + B[i][j];
        }
    }
    printf("Matrix after addition:\n");
    mprintf(C);
}

int main() {
    printf("Enter row, column for 1st matrix: ");
    scanf("%d,%d", &a1, &a2);

    printf("Enter row, column for 2nd matrix: ");
    scanf("%d,%d", &b1, &b2);

    int A[a1][a2], B[b1][b2];

    if (a1 == b1 && a2 == b2) {
        minput(A, B);
        printf("Matrix 1:\n");
        mprintf(A);
        printf("Matrix 2:\n");
        mprintf(B);
        madd(A, B);
    } else {
        printf("Addition is not possible.\n");
    }

    if (a2 == b1) {
        mmulti(A, B);
    } else {
        printf("Multiplication is not possible.\n");
    }

    mtrans(A, B);

    return 0;
}
