#include <stdio.h>
int main() {
    int n;
    printf("pick a number : ");
    scanf("%d" , &n);
    for(int i = 0 ; i <= n ; i++ ) {
        printf("%d \n" , i);
    }
    return 0;
    
}