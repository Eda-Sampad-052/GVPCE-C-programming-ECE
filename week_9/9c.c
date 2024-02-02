#include <stdio.h>
void main() {
    int i;
    printf("Enter a value for the variable: ");
    scanf("%d", &i);
    int *ptr = &i;
    printf("\nAddress of the variable: %p\n", (void*)&i);
    printf("Value of the variable: %d\n", i);
    ptr = ptr + 1;
    printf("Address after pointer addition: %p\n", (void*)ptr);
    printf("Value of the variable: %d\n", *ptr);
    ptr = ptr - 1;
    printf("Address after pointer subtraction: %p\n", (void*)ptr);
    printf("Value of the variable: %d\n", *ptr);
    ptr++;
    printf("Address after pointer increment: %p\n", (void*)ptr);
    printf("Value of the variable: %d\n", *ptr);
    ptr--;
    printf("Address after pointer decrement: %p\n", (void*)ptr);
    printf("Value of the variable: %d\n", *ptr);
    int* ptr2 = &i;
    if (ptr == ptr2) {
        printf("Pointers are equal.\n");
    } else {
        printf("Pointers are not equal.\n");
    }
}
