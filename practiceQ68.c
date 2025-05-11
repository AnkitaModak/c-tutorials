#include <stdio.h>
#include <stdlib.h>

int main() {
    int *ptr;
    ptr = ( int *) calloc(5 ,sizeof(int));
    printf("enter numbers :");
    for(int i = 0 ; i <5 ; i++){
        scanf("%d" ,&ptr[i]);
    }
    ptr =realloc(ptr , 8);
    printf("enter numbers :");
    for(int i = 0 ; i <8 ; i++){
        scanf("%d" ,&ptr[i]);
    }
    for(int i = 0 ; i < 8; i++){
        printf("%d number : %d\n" ,i , ptr[i]);
    }
    return 0;
}