#include <stdio.h>

void swap(int a , int b);
void _swap(int *a, int *b);
int main() {
    int x = 2;
    int y = 7;
    swap(x,y);
    printf("x = %d & y = %d\n",x ,y);
    _swap(&x,&y);
    printf("x = %d & y = %d\n",x ,y);
    return 0;
}
//  call by value
void swap(int a, int b)
{
    int c;
    c = b;
    b = a;
    a = c;
    printf("a = %d & b = %d \n",a ,b);
}
// call by reference
void _swap(int *a, int *b)
{
    int c = *b;
    *b = *a;
    *a = c;
    printf("a = %d & b = %d \n",*a ,*b);

}
