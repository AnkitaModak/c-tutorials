#include <stdio.h>
void printstring(char arr[]);
int main() {
    char first_name[] = "Ankita";
    char last_name[] = "Modak";
    printstring(first_name);
    printstring(last_name);
    return 0;
}
void printstring(char arr[]){
    for(char i = 0 ; arr[i] != '\0' ; i++){
        printf("%c" ,arr[i]);
    }
    printf("\n");
}