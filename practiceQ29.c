#include <stdio.h>
#include <math.h>
void square(int n);
int main() {
    int n;
    printf("enter a number darling : ");
    scanf("%d" ,&n);
    square(n);
    int power = pow(n,3);
    printf("the cube is %d\n" , power);
    return 0;
}
void square(int n) {
    int square = n * n;
    printf("the square is %d\n" , square);
}
