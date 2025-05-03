#include <stdio.h>
int fact(int n);
int main() {
    int n;
    printf("enter a number : ");
    scanf("%d" , &n);
    int factorial = fact(n);
    printf("the factorial is %d" , factorial);
    return 0;
}
int fact(int n ){
    if(n == 0 ){
        return  1;
    }
    if(n == 1){
        return 1;
    }
    int f = n * fact(n-1);
    return f;
}