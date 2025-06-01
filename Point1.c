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
