#include<stdio.h>
#include<stdlib.h>
#include<string.h>
struct student_details
{
    char name[30];
    int roll_number;
};
int main()
{
    struct student_details* str_ptr;
    str_ptr=(struct student_details*)calloc(1,sizeof(struct student_details));
    printf("\nStructure size --%d",sizeof(struct student_details));
    printf("\nName --%s",str_ptr->name);
    printf("\nRoll Number --%d",(*str_ptr).roll_number);
    strcpy(str_ptr->name,"Jonathan");
    (*str_ptr).roll_number=34;
    printf("\nName --%s",str_ptr->name);
    printf("\nRoll Number --%d",(*str_ptr).roll_number);
    return 0;
}


Output:

Structure size --36
Name --
Roll Number --0
Name --Jonathan
Roll Number --34


