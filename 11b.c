#include <stdio.h>

typedef struct student {
    char name[50];
    int age;
    float marks;
}student;
int main() {
    student stu1 = {"John", 20, 85.5};

    student *ptr = &stu1;

    printf("Direct Member Access:\n");
    printf("Name: %s\n", stu1.name);
    printf("Age: %d\n", stu1.age);
    printf("Marks: %.2f\n\n", stu1.marks);

    printf("Pointer-to-Member Operator:\n");
    printf("Name: %s\n", ptr->name);
    printf("Age: %d\n", ptr->age);
    printf("Marks: %.2f\n\n", ptr->marks);

    printf("Pointer Arithmetic:\n");
    printf("Name: %s\n", (*ptr).name);
    printf("Age: %d\n", (*ptr).age);
    printf("Marks: %.2f\n\n", (*ptr).marks);

    return 0;
}
