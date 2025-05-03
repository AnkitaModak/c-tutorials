# include <stdio.h>

int main() {
    int n;
    printf("enter a number : ");
    scanf("%d" , &n);
    int factorial = 1;
    for(int i = n ; i >= 1 ; i--) {
        factorial = factorial * i;
    }
    printf("the factorial is %d" , factorial);
    return 0;
}
