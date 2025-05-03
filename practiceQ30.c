#include <stdio.h>
void square(int m);
void circle(float n);
void rectangle(int o , int p);
int main() {
    int m,o,p;
    float n;
    printf("enter side :  ");
    scanf("%d",&m);
    square(m);
    printf("enter radius :  ");
    scanf("%f",&n);
    circle(n);
    printf("enter length :  ");
    scanf("%d",&o);
    printf("enter width :  ");
    scanf("%d",&p);
    rectangle(o,p);
    return 0;
}
void square(int m) {
    int area = m * m;
    printf("the area of a square is %d\n",area);
}
void circle(float n) {
    float area = n * n * 3.14;
    printf("the area of a square is %f\n",area);
}
void rectangle(int o,int p) {
    int area = o * p;
    printf("the area of a square is %d\n",area);
}
