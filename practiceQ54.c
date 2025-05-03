#include <stdio.h>
void check(char str[] , char ch);
int main() {
    char str[] = "hi my beautiful lady !";
    char ch;
    printf("enter the character you wanna check :");
    scanf("%c" , &ch);
    check(str , ch);
    return 0 ;
}

void check(char str[], char ch)
{   for(int i = 0 ; str[i] !='\0'; i++ ){
        if(str[i] == ch){
            printf("character is in string");
            return;
        }  
}
    printf("character not in string");
}
