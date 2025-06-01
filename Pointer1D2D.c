#include<stdio.h>
int main()
{
    int *A;
    int i,j;
    int x[7]= {1,2,3,4,5,6,7};
    int Y[3][4] = {{1,2,3,4}, {5,6,7,8}, {9,10,11,12}};
    A=x;
    for(i=0;i<7;i++)
    {
        printf("\nAddress %d: %p",i,&x[i]);
        printf("\tValue is %d = %d",1, *(A+i));

}
        A=&Y[0][0];
        for(i=0;i<3;i++)
        {
            printf("\n");
            for(j=0;j<4;j++)
        {
            printf("\t%d",*(A+i*4+j));
        }
    }
    return 0;
}




Output:


Address 0: 0x7ffd20cd5b70	Value is 1 = 1
Address 1: 0x7ffd20cd5b74	Value is 1 = 2
Address 2: 0x7ffd20cd5b78	Value is 1 = 3
Address 3: 0x7ffd20cd5b7c	Value is 1 = 4
Address 4: 0x7ffd20cd5b80	Value is 1 = 5
Address 5: 0x7ffd20cd5b84	Value is 1 = 6
Address 6: 0x7ffd20cd5b88	Value is 1 = 7
	1	2	3	4
	5	6	7	8
	9	10	11	12


