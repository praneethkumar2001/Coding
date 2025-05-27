#include<stdio.h>
struct student_details
{
    char name[30];
    int roll_no;
    char address[40];
    int marks;
};
void main()
{
    struct student_details student1= {"Abhi",25,"Karnataka",8};
    printf("\nName: %s",student1.name);
    printf("\nRoll_no: %d",student1.roll_no);
    printf("\naddress: %s",student1.address);
    printf("\nmarks: %d",student1.marks);
}


Output:

Name: Abhi
Roll_no: 25
address: Karnataka
marks: 8

------------------------------------------------------------------------------------------------

#include<stdio.h>
struct student_details
{
    char name[30];
    int roll_no;
    char address[40];
    float marks;
};
void main()
{
    struct student_details student1= {"Abhi",25,"Karnataka",80.00};
    printf("\nName: %s",student1.name);
    printf("\nRoll_no: %d",student1.roll_no);
    printf("\naddress: %s",student1.address);
    printf("\nmarks: %f",student1.marks);
}


Output:

Name: Abhi
Roll_no: 25
address: Karnataka
marks: 80.000000


------------------------------------------------------------------------------------------------

#include<stdio.h>
struct student_details
{
    char name[30];
    int roll_no;
    char address[40];
    float marks;
};
void main()
{
    struct student_details student1= {"Abhi",25,"Karnataka",80.00};
    printf("\nName: %s",student1.name);
    printf("\nRoll_no: %d",student1.roll_no);
    printf("\naddress: %s",student1.address);
    printf("\nmarks: %0.2f",student1.marks);
}


Output:

Name: Abhi
Roll_no: 25
address: Karnataka
marks: 80.00

