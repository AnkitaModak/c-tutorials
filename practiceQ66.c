#include <stdio.h>
#include <stdlib.h>

int main() {
    int *ptr;
    int n;
    printf("enter n :");
    scanf("%d" , &n);

    ptr = ( int *) calloc(n, sizeof(int));
   
    for(int i = 0 ; i <5 ; i++){
        printf("%d\n" ,ptr[i]);
    }
    return 0;
}
