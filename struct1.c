#include<stdio.h>
struct marks
{
    float sub1;
    float sub2;
};
struct student_details
{
    struct marks mark;
};
void main()
{
    int i;
    struct student_details student;
    student.mark.sub1=45;
    student.mark.sub2=55;
    printf("\n Marks1=%.2f",student.mark.sub1);
    printf("\n Marks1=%.2f",student.mark.sub2);
}


Output:

Marks1=45.00
Marks2=55.00