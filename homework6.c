/*#include <stdio.h>
void max_num(int *a ,int *b);
int main() {
    int a , b;
    printf("enter a = ");
    scanf("%d" , &a);
    printf("enter b =");
    scanf("%d" , &b);
    max_num(&a , &b);
    return 0;
}

void max_num(int *a, int *b)
{   int max = 0;
    if( *a > *b ){
        max = *a;
    }
    else if(*a < *b) {
        max = *b;
    }
    printf("the max is %d", max);
}*/

#include <stdio.h>

int main() {
    int arr[] = {1,2,3,6,7};
    for (int i = 0; i < 5;i++){
        printf("%d \t",arr[i]);
    }
    return 0;
}
