#include <stdio.h>
int fibonacci(int n);
int main() {
    int n;
    printf("enter any number : ");
    scanf("%d" , &n);
    int f = fibonacci(n);
    printf("fibonacci of %d is %d\n" , n,f);
    return 0;
}
int fibonacci(int n){
    if(n==0){
        return 0;
    }
    if(n== 1){
        return 1;
    }
    int f = fibonacci(n-1) + fibonacci(n-2);
    //printf("fibonacci of %d is %d\n" , n,f); (to print n terms)
    return f;
}
