#include <stdio.h>
void main() 
{
    FILE *file_ptr;
    char c;
    file_ptr = fopen("C:\\Users\\prane\\OneDrive\\Documents\\DF.txt", "w");
    if (file_ptr == NULL)
        printf("\nUnable to create/open file");
    else
        printf("\nFile opened successfully");
        while ((c = getchar()) != EOF) 
        {
        putc(c, file_ptr); 
        }
    fclose(file_ptr);
    printf("\nFile closed");
    printf("\nFile read operation start");
    file_ptr = fopen("C:\\Users\\prane\\OneDrive\\Documents\\DF.txt", "r"); 
    if (file_ptr == NULL)
        printf("\nUnable to create/open file");
    else
        printf("\nFile opened successfully");
        while ((c = getc(file_ptr)) != EOF) 
        {
        printf("\n%c", c);
        }
    fclose(file_ptr);
}


Output:
