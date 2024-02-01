#include <stdio.h>

void main() {
    typedef struct student{
        char name[50];
        long int rno;
        char dob[20];
        char email[50];
    } student;
    student stu;
    printf("Enter name: ");
    gets(stu.name);
    printf("Enter dob: ");
    gets(stu.dob);
    printf("Enter email: ");
    gets(stu.email);
    printf("Enter roll no: ");
    scanf("%ld", &stu.rno);
    printf("Name of student: %s\nRoll no: %ld\nEmail: %s\nDOB: %s\n", stu.name, stu.rno, stu.email, stu.dob);
}
