#include <stdio.h>

int main(){
    FILE *fptr;
    fptr = fopen("Test.txt","r");
    if(fptr == NULL){
        printf("file doesn't exist");
    }
    else{
        fclose(fptr);}
    fclose(fptr);
    return 0;
}