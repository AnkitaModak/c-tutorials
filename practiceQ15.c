#include <stdio.h>
int main() {
    // sum of first n natural numbers
    int n ;
    printf("enter a number : ");
    scanf("%d" , &n);
    int sum = 0;

    for(int i = 1 ; i <= n ; i++) { 
        sum = sum + i;
    } 
    printf("the sum is %d \n " , sum);
    // print the numbers in reverse
    for(int i = n ; i > 0 ; i--) {
        printf("%d \n" , i);
    }
    return 0;


}