#include <stdio.h>
typedef struct complexnumbers{
    int real;
    int img;
}cn;
int main() {
    cn num1 = {5,8};
    cn *ptr = &num1;
    printf("the complex no. is %d + i%d" , ptr->real,ptr->img );
    return 0;
}