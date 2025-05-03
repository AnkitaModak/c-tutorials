#include <stdio.h>
float ctof(float n);
int main() {
    float n;
    printf("enter temperature in celsius : ");
    scanf("%f", &n);
    float temp = ctof(n);
    printf("the temperature in farenheit is : %f" ,temp);
    return 0;
}
float ctof(float n) {
    float f = n * 1.8 + 32;
    return f; 
}