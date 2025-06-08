#include <stdio.h>

int main(int argc, char* argv[])
{
    printf("Number of command line arguments are %d\n", argc - 1);

    for (int i = 1; i < argc; i++)
    {
        printf("Argument %d is %s\n", i, argv[i]);
    }

    return 0;
}


Output:

Number of command line arguments are 0