#include<stdio.h>
struct student_details
{
    char name[30];
    int roll_number;
};
int main()
{
struct student_details* str_ptr;
struct student_details
student1={"Rambo",24};
str_ptr=&student1;
printf("\n--- Student Details ---\n");
printf("\n Name--%s",str_ptr->name);
printf("\n Roll Number--%d",(*str_ptr).roll_number);
return 0;
}

Output:

--- Student Details ---

 Name--Rambo
 Roll Number--24


