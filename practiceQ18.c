#include <stdio.h>

int main() {
    int n;
    while(n % 7 != 0 ) {
        printf("Enter a Number : ");
        scanf("%d", &n);
    }
    printf("thank you !");
    return 0 ;
}