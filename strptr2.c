#include<stdio.h>
struct student_details
{
    char name[30];
    int roll_number;
};
void print_student_details(struct student_details *);
void main()
{
struct student_details student1={"Rambo",24};
print_student_details(&student1);
}
void print_student_details(struct student_details *str_ptr)
{
    printf("\n--- Student Details ---\n");
    printf("\n Name--%s",str_ptr->name);
    printf("\n Roll Number--%d",(*str_ptr).roll_number);
}


Output:


--- Student Details ---

 Name--Rambo
 Roll Number--24


