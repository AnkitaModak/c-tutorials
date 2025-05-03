#include <stdio.h>
int sum(int n);
int main() {
    int n;
    printf("enter any number : ");
    scanf("%d" , &n);
    int final = sum(n);
    printf("the sum is %d\n" , final);
    return 0;
}
int sum(int n) {
    if(n==1) {
        return 1;
    }
    int s = n + sum(n-1);
    return s;
}