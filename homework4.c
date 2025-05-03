#include <stdio.h>

int main() {
    /*int rows;
    int columns;
    printf("Enter row : ");
    scanf("%d",&rows);
    printf("Enter columns : ");
    scanf("%d",&columns);

    // printing star patterns

    for(int i = 1 ; i <= rows ; i++) {
        for(int j = 1 ; j <= i ; j++){
            printf("*");
        }
        printf("\n");
    }

    //printing square

    for(int i = 1 ; i <= rows ; i++) {
        for(int j = 1 ; j <= columns ; j++){
            printf("*");
        }
        printf("\n");
    }*/
/*
    // check if a number is prime
    int n ;
    int is_prime = 1; // means that we are assuming that the number is already prime
    printf("enter a number : ");
    scanf("%d" , &n);
    if(n <= 1){
        printf("the number is not prime");
    }
    for(int i = 2 ; i <n ; i++) {
        if(n % i == 0){
            is_prime = 0;
            break;
        }
    }
    if(is_prime == 1){
        printf("the fellow number is prime");
    }
    else{
        printf("the fellow number is not prime");
    }*/
// This program is to find prime numbers in a range

    int range, start, count = 0;
    printf("Enter the starting point : ");
    scanf("%d", &start);
    printf("Enter the range : ");
    scanf("%d", &range);

    for (int i = start; i <= range; i++)
    {
        count = 0;
        for (int j = 1; j <= i; j++)
        {
            if (i % j == 0)
            {
                count++;
            }
        }
        if (count == 2)
        {
            printf("Prime number : %d\n", i);
        }
}

    return 0;

}