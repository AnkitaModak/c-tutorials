#include <stdio.h>
int main() {
    int marks;
    printf("enter marks:");
    scanf("%d" , &marks);
    if(marks > 30) {
        printf("WOOOH YOU PASSED \n");
        printf("you got %d", marks);
    }
    else {
        printf("YOU COUlDN'T PASS!\n");
    }

}