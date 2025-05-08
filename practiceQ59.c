#include <stdio.h>
typedef struct BankofIndia{
    int acc;
    char name[100];
}BOI;
int main() {
    BOI acc1 = {123,"Ankita"};
    printf("name = %s , accno = %d" , acc1.name ,acc1.acc);
    return 0;
}