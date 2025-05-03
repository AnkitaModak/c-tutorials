#include <stdio.h>
void f1();
void f2();
int main() {
    f1();
    f2();
    return 0;
}
void f1(){
    printf("hello\n");
}
void f2() {
    printf("goodbye");
}