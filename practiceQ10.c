#include <stdio.h>
int main() {
    int marks;
    printf("enter marks(0-100) :");
    scanf("%d" , marks);
    if(0 <= marks < 30) {
        printf("grade C");
    }
    else if( 30 <= marks <70){
        printf("grade B");
    }
    else if( 70 <= marks <90){
        printf("grade A");
    }
    else if( 90 <= marks <100){
        printf("grade A+");
    }
    else{
        printf("enter valid marks");
    }
    return 0 ; 
}