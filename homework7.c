/*#include <stdio.h>
// count terms

int findx(int arr[] , int n ,int x);
int main() {
    int arr[] = {1,2,45,758,4,3,4,3};
    int x;
    printf("enter the number you wish to find : \n");
    scanf("%d", &x);
    printf("the number %d occurs %d times " , x,findx(arr, 7 , x ));
    return 0 ;

}

int findx(int arr[], int n ,int x)
{   int count = 0;
    for(int i = 0; i < n ; i++){
        if(arr[i] == x){
            count++;
        }
        else{
            continue;
        }
        
    }
    return count;
}*/

/*#include <stdio.h>
//largest number
int maxnum(int arr[] , int n);
int main() {
    int arr[] = {1,4,5,90,34};
    printf("the largest number in the array is %d" , maxnum(arr , 5));
    return 0;
}

int maxnum(int arr[], int n)
{   int max = 0;
    for(int i = 0; i < n ; i++){
        if(arr[i] > max ){
            max = arr[i];
        }
    }
    return max;
}*/

#include <stdio.h>
int main() {
    int arr[] = {1,2,3,4,5};
    int n =5;
    int x = 7;
    arr[n] =  x;
    n++;
    for(int i = 0 ; i < n ; i++){
        printf("%d \t" ,arr[i]);
    }
    return 0;
}
