#include<stdio.h>
#include<string.h>
struct marks
{
    float sub1;
    float sub2;
};
struct student_details
{
    char name[30];
    struct marks mark;
};

struct student_details update_marks(struct student_details s, float increment) 
{
    s.mark.sub1 += increment;
    s.mark.sub2 += increment;
    return s;
}
int main()
{
    
    struct student_details student, updated_student;
    
    strcpy(student.name,"JK");
    
    student.mark.sub1=45;
    student.mark.sub2=55;
    
    printf("\n\nOriginal Record:\n");
    printf("-------------------------\n");
    printf("\nName :%s",student.name);
    printf("\nMarks1:%.2f",student.mark.sub1);
    printf("\nMarks2:%.2f",student.mark.sub2);
    
    updated_student = update_marks(student, 10.0);
    
    printf("\n\nUpdated Record:\n");
    printf("-------------------------\n");
    printf("\nName = %s",updated_student.name);
    printf("\nMarks1:%.2f",updated_student.mark.sub1);
    printf("\nMarks2:%.2f",updated_student.mark.sub2);
    return 0;

}


Output:

Original Record:
-------------------------

Name :JK
Marks1:45.00
Marks2:55.00

Updated Record:
-------------------------

Name = JK
Marks1:55.00
Marks2:65.00
