#include <stdio.h>
int main() {
    FILE *fptr;
    fptr = fopen("Test.txt" ,"r");

    
    int digit;
    for(int i = 0 ; i < 5; i++ )
    {   fscanf(fptr ,"%d" , &digit);
        printf("character = %d\n" , digit);
    }
    fclose(fptr);
    return 0;
}
