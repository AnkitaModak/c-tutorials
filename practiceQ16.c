#include <stdio.h>

int main() {
    int n;
    printf("enter number :");
    scanf("%d" , &n);
    int table = 1;
    for(int i = 1 ; i <= 10 ; i++) {
        table = i * n;
        printf("%d\n" , table);
    }

    return 0 ; 
}