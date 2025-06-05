#include <stdio.h>
#include <stdlib.h>

int main() {
    FILE *file_ptr;
    char c;
    file_ptr = fopen("C:\\Users\\prane\\OneDrive\\Documents\\Github\\Coding\\Dcalloc.c", "w");
    
    if (file_ptr == NULL)
        printf("\nUnable to create / open file");
    else {
        printf("\nFile opened successfully");
        fclose(file_ptr);
        printf("\nFile closed");
    }
    
    return 0;
}

Output:

Unable to create / open file