#include <stdio.h>
#include <math.h>
//armstrong number

int countdigit(int n);
void check(int n);

int main() {
    int n;
    printf("Enter your number: ");
    scanf("%d", &n);
    check(n);
    return 0;
}

int countdigit(int n) {
    int count = 0;
    while (n != 0) {
        n = n / 10;
        count++;
    }
    return count;
}

void check(int n) {
    int sum = 0;
    int originalnum = n;
    int count = countdigit(n);
    
    while (originalnum != 0) {
        int r = originalnum % 10;
        sum += round(pow(r, count));  // Using round() to handle floating-point precision
        originalnum = originalnum / 10;
    }
    
    if (sum == n) {
        printf("%d is an Armstrong number\n", n);
    } else {
        printf("%d is not an Armstrong number\n", n);
    }
}    

r

   /* // natural number
    int num ;
    printf("enter num :");
    scanf("%d" ,&num);
    if (num > 0) {
        printf("this is a natural number");
    }
    else {
        printf("this is not a natural number");
    }
    return 0 ;
}*/