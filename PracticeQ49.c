#include <stdio.h>

int main() {
    char name[100];
    fgets(name , 100 , stdin);
    int count = 0;
    for (char i =0; name[i] != '\0' ; i++ ){
        count++;
    }
    printf("the length is %d" ,(count-1));
    return 0;
}