#include <stdio.h>
#include <stdlib.h>

int main() {
    int *ptr;
    ptr = ( float *) malloc(5 * sizeof(float));
    ptr[0] = 1.0;
    ptr[1] = 2.9;
    ptr[2] = 4.3;
    ptr[3] = 3.3;
    ptr[4] = 3.3;
    for(int i = 0 ; i <5 ; i++){
        printf("%f\n" ,ptr[i]);
    }
    free(ptr); 
    return 0;
}