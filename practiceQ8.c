#include <stdio.h>
int main() {
    int isSunday = 1;
    int isSnowing = 1;
    int isMonday = 1;
    int isRaining = 1;
    int x;
    printf("%d \n",isSunday && isSnowing);
    printf("%d \n",isMonday && isRaining);
    printf("enter num : ");
    scanf("%d" , &x);
    printf("%d", x > 9 && x < 100);
    return 0;
}