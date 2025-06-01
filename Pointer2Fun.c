#include<stdio.h>
#include<string.h>
int* greater(int*,int*);
int main()
{
int x,y;int *large;
int* (*fptr)();
x=3;
y=100;
printf("\nAddress is :%p",&x);
printf("\nAddress is :%p",&y);
fptr=greater;
large=(*fptr)(&x,&y);
printf("\nGreater value is %d",*large);
}
int* greater(int* x, int* y)
{
if(*x > *y)
return(x);
else
return(y);
}



Output:

Address is :0x7ffd6a7137bc
Address is :0x7ffd6a7137b8
Greater value is 100

