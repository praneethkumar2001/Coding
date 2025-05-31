#include<stdio.h>
#include<string.h>

union marks
{
    float sub1;
    float sub2;
};
int main()
{
    union marks m1;
    m1.sub1=1000.00;
    printf("\nSUB1 = %f", m1.sub1);
    printf("\nSUB2 = %f", m1.sub2);
    return 0;
}



Output:

SUB1 = 1000.000000
SUB2 = 1000.000000