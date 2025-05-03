#include <stdio.h>
#include <math.h>

int sumofdigits(int n);
void tempchecker(int n);
float root(float n);
int power(int n , int m);
int main() {
    int n;
    printf("enter number :");
    scanf("%d", &n);
    int s = sumofdigits(n);
    printf("the sum is %d\n" ,s);
    int temp;
    printf("enter temperature in celcuis : ");
    scanf("%d", &temp);
    tempchecker(temp);
    float num;
    printf("enter number :");
    scanf("%f", &num);
    float final = root(num);
    printf("the square root of %f is %f\n", num, final);
    int NUM, ex;
    printf("enter number :");
    scanf("%d", &NUM);
    printf("enter the exponent :");
    scanf("%d" , &ex);
    int pow = power(NUM , ex);
    printf("the power of %d is %d" ,NUM , pow );
    return 0;
}
int sumofdigits(int n){
    if (n < 10) {
        return n;
    }
    int sum = 0;
    int i =10;
    while(i  >= 10) {

        int digit = n % 10;
        sum += digit;
        n /= 10;
        i++;
    }
    return sum;
}
void tempchecker(int n) {
    if(n <= 20 ){
        printf("cold\n");
    }
    if(n >= 21 ){
        printf("hot\n");
    }
}
float root(float n) {
    float sr = sqrt(n);
    return sr;
}
int power(int n , int m) {
    int p = 1;
    
    for ( int i = 1 ;  i <=  m ;  i ++){
        p *= n;
    }
    return n;
}