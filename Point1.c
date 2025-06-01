#include<stdio.h>
int main()
{
    int *A;
    int B=10;
    A = &B;
    printf("\nAddress %p",A);
    printf("\nValue =%d", *A);
    printf("\nsize of Integer : %d", sizeof(int));
    return 0;
}


Output:

Address 0x7ffee214ac64
Value =10
size of Integer : 4


#include<stdio.h>
int main()
{
    int *A;
    int B=10;
    A = &B;
    printf("\nAddress : %p",A);
    printf("\nValue = %d", *A);
    printf("\nsize of Integer : %d", sizeof(int));
    printf("\nAddress : %p",--A);
    return 0;
}

Output:

Address : 0x7ffcce17ad24
Value = 10
size of Integer : 4
Address : 0x7ffcce17ad20


#include<stdio.h>
int main()
{
    int *A;
    int B=10;
    A = &B;
    printf("\nAddress : %p",A);
    printf("\nValue = %d", *A);
    printf("\nsize of Integer : %d", sizeof(int));
    printf("\nAddress : %p",++A);
    return 0;
}

Output:

Address : 0x7ffdba9add54
Value = 10
size of Integer : 4
Address : 0x7ffdba9add58


