#include <stdio.h>
int main() {
// avg between three numbers
    int x,y,z;
    printf("enter first num : ");
    scanf("%d" , &x);
    printf("enter second num : ");
    scanf("%d" , &y);
    printf("enter third num : ");
    scanf("%d" , &z);
    int avg = (x + y + z)/3;
    printf("the average is %d \n",avg);
// character is digit or not
    int a;
    printf("Enter :");
    scanf("%d", &a);
    printf("%d \n",a < 9 && a >= 0);
// check smallest no. 
// if num1 is small --> 1
// if num1 is small --> 0
    int num1,num2;
    printf("enter first num: ");
    scanf("%d",&num1);
    printf("enter second num: ");
    scanf("%d",&num2);
    printf("%d",num1 < num2);
    return 0;
}