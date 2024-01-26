#include <stdio.h>
int add(int a, int b) {
    return a + b;
}

int main() {
    int value = 10;
    int *ptr = &value;
    int **ptr_to_ptr = &ptr;


    printf("Value: %d\n", value);
    printf("Pointer: %p, Value: %d\n", (void *)ptr, *ptr);
    printf("Pointer to Pointer: %p, Value: %d\n\n", (void *)ptr_to_ptr, **ptr_to_ptr);
    int num1, num2, num3;
    int *arr_of_ptrs[] = {&num1, &num2, &num3};
  

    printf("Enter three integers: ");
    scanf("%d %d %d", &num1, &num2, &num3);
    for (int i = 0; i < 3; ++i) {
        printf("Element %d: %d\n", i + 1, *arr_of_ptrs[i]);
    }
    printf("\n");
    int nums[5];
    int *ptr_to_arr = nums;
    
    
    printf("Enter five integers: ");
    for (int i = 0; i < 5; ++i) {
        scanf("%d", ptr_to_arr + i);
    }
    for (int i = 0; i < 5; ++i) {
        printf("Element %d: %d\n", i + 1, *(ptr_to_arr + i));
    }
    printf("\n");


    int (*operation)(int, int);
    int operand1, operand2;
    printf("Enter two integers for addition: ");
    scanf("%d %d", &operand1, &operand2);
    operation = add;
    printf("Pointers to Functions - Addition: %d\n", operation(operand1, operand2));

    return 0;
}