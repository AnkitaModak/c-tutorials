#include <stdio.h>

int main() {
    int side;
    printf("enter side : ");
    scanf("%d" , &side);
    int area = side * side;
    printf("the area of a square is : %d" , area);
    return 0;
}