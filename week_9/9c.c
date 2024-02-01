#include <stdio.h>
void main() {
    int i;
    printf("Enter a value for the variable: ");
    scanf("%d", &i);
    int *ptr = &i;
    printf("\nAddress of the variable: %p\n", (void*)&i);
    printf("Value of the variable: %d\n", i);
    printf("\nPointer Addition:\n");
    ptr = ptr + 1;
    printf("Address after pointer addition: %p\n", (void*)ptr);
    printf("Value of the variable: %d\n", *ptr);
    printf("\nPointer Subtraction:\n");
    ptr = ptr - 1;
    printf("Address after pointer subtraction: %p\n", (void*)ptr);
    printf("Value of the variable: %d\n", *ptr);
    printf("\nPointer Increment:\n");
    ptr++;
    printf("Address after pointer increment: %p\n", (void*)ptr);
    printf("Value of the variable: %d\n", *ptr);
    printf("\nPointer Decrement:\n");
    ptr--;
    printf("Address after pointer decrement: %p\n", (void*)ptr);
    printf("Value of the variable: %d\n", *ptr);
    printf("\nPointer Comparison:\n");
    int* ptr2 = &i;
    if (ptr == ptr2) {
        printf("Pointers are equal.\n");
    } else {
        printf("Pointers are not equal.\n");
    }
}
