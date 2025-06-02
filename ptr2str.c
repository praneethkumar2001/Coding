#include<stdio.h>
#include<string.h>
void main()
{
    char *str_ptr1;
    int i;
    i=0;
    char string1[100]="Hi how are you";
    str_ptr1=string1;
    printf("\nSize of char :%d",(int)sizeof(char));
    while (*str_ptr1 != '\0')
    {
        printf("\n---%p---%c",str_ptr1, *str_ptr1);
        str_ptr1++;
       
    }
}



Output:

Size of char :1
---0x7ffc6f382a00---H
---0x7ffc6f382a01---i
---0x7ffc6f382a02--- 
---0x7ffc6f382a03---h
---0x7ffc6f382a04---o
---0x7ffc6f382a05---w
---0x7ffc6f382a06--- 
---0x7ffc6f382a07---a
---0x7ffc6f382a08---r
---0x7ffc6f382a09---e
---0x7ffc6f382a0a--- 
---0x7ffc6f382a0b---y
---0x7ffc6f382a0c---o
---0x7ffc6f382a0d---u


